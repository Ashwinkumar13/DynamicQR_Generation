import qrcode
import random
import time
import psutil
from PIL import Image
import matplotlib.pyplot as plt
import matplotlib.image as apimg
import time

for i in range(0,5):
    ran="https://create.arduino.cc/iot/dashboards/f1871d8a-5649-4eb7-866d-b783a908c0df?mode=view"
    print(ran)
    qr_img=qrcode.make(ran)
    qr_img.save("qr-img.jpg")
    #img = Image.open("qr-img.jpg")
    f=Image.open("qr-img.jpg")
    #f2="qr-img.bmp"
    #f.save(f2)
    plt.imshow(f)
    plt.ion()
    plt.show()
    #time.sleep(4)
    plt.pause(40)
    plt.close()
    #for proc in psutil.process_iter():
    ##        proc.kill()
    #img.close()
    
