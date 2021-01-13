# Image-rotation-using-opencv-cpp
C++ Program to Input an image and an angle and rotate the image by the angle inputted by the user.



Problem statement: Write a program to input an image and an angle and then rotate the image by the that angle.

Scope of the code:  This program can  successfuly rotate the inputed image by the inputted angle                 
                  
Language: C++
        
         
Required Library: OpenCV
                 
                 
Platform Required: Visual Studio 2019 (visualstudio.microsoft.com)
                   Opencv (opencv.org)
            
How to install the required platform:
 Visual Studio
 1. Go to visualstudio.microsoft.com and download the installer.
 2. Install the installer and then open it.
 3. Choose Visual studio 2019 community with the C++ desktop envirnoment kit.
 Opencv
 1.Go to opencv.org and download the windows version.
 2. Install the opencv.
 3. Copy the build file location and paste it to the path of environmental varibles of the the machine.

Steps invovled:
  1. using function Mat rotate to rotate the image.
  2. In the Mat rotate, I am taking the input of the angle from the user.
  3. And, then after using warpAffine to got the final rotated image as dst.
  4. Return the dst.
  
  5. In int main(), I am giving the path of the image using Mat image = imread("path with the name-of-the-image.JPG"). 
  6. calling rotate with (image,10).
  7. checking for the empty case, using if.
  8. Creating the window to display the image for both orginal image and roatated image.
  9. Displaying the image using imshow() function.
  
  
Header files used: <opencv2/highgui/highgui.hpp>
                   <opencv2/imgproc/imgproc.hpp>
                   <iostream>
  


How can you run this code?
After installing the Vs and opencv. You have to go to the Visual studio and create a new C++ Console project.
Go to the Project setting and add these following things to Visual studio Project- 
    
    1. Include directory 
    2. Library directory 
    
    Now you are good to go with the code. Write the code and build and run it.
    Now, You have to enter the angle by which you want to rotate the image.
    And the output will be on the screen.

Ouput:
 Input the angle.
 You will see two different images. First the orginal image and second the rotated image.
 The sample orginal and rotated output image is uploaded as a commit to the same repo.















