import qrcode;
import image ;
qr = qrcode.QRCode(
    version= 15 , # 15 means the version of the  QR codehigh the number bigger the code imageand complicated picture
    box_size= 2,# size the box where qr code will be displayed
    border = 3  #it is the white part of the image -- border of all 4 side with white color
)
url = input("Enter a URL to generate QR !"); 
qr.add_data(url) ; 
qr.make(fit=True); 
img = qr.make_image(fill="black" , back_color="white"); 
name =  input("Enter the name of the file to save the QR code !"); 
name += ".png" ; 
img.save(name) ; 
