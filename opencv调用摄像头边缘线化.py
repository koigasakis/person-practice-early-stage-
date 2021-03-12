import cv2
import numpy as np
cap=cv2.VideoCapture(0,cv2.CAP_DSHOW)
cap.open(0)
while cap.isOpened():
    flag,frame=cap.read()
    if not flag:
        break
    key_pressed=cv2.waitKey(60)
    print('blackboard is ',key_pressed)
    frame=cv2.Canny(frame,20,40)
    frame=np.dstack((frame,frame,frame))
    cv2.imshow('mygook',frame)
    if key_pressed==27:
        break
cap.release()
cv2.destroyALLWindows()
    