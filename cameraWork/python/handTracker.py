import cv2
import mediapipe as mp
import time

vid = cv2.VideoCapture(0)


mpHands = mp.solutions.hands
hands = mpHands.Hands( static_image_mode = False,
                                                  max_num_hands=2,
                                                  min_detection_confidence=.75,
                                                  min_tracking_confidence = .6)
mpDraw = mp.solutions.drawing_utils

pTime = 0
cTime = 0


while True:
    success, img = vid.read()
    imgRGB = cv2.cvtColor(img, cv2.COLOR_BGR2RGB)
    results = hands.process(imgRGB)
    #print(results.multi_hand_landmarks)

    if results.multi_hand_landmarks:
        for handLms in results.multi_hand_landmarks:
            for id, lm in enumerate( handLms.landmark ):
                #print (id, lm )
                print( id, lm.x )
                h, w, c = img.shape
                cx, cy = int( lm.x * w), int(lm.y*h)
                #if id == 0:
                cv2.circle(img, (cx, cy), 3, (255, 0, 255), cv2.FILLED)


            mpDraw.draw_landmarks(img, handLms, mpHands.HAND_CONNECTIONS)


    cTime = time.time()
    fps= 1 / (cTime - pTime)
    pTime = cTime

    cv2.putText(img, str(int(fps)), (10, 70), cv2.FONT_HERSHEY_PLAIN, 3, (255, 0, 255), 3)

    start = (0, 0 )   #figure out a way to access only lm(0).x
    end = (250, 0 )
    color = (0, 0, 0)
    cv2.line( img, start, end, color, 1 )


    cv2.imshow( "Image", img)
    cv2.waitKey(5)

