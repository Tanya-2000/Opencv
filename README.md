# Opencv
image processing
We access an image existing already on our machine and then convert it to a grayscale image using header files of OpenCV.

To convert an image to its GrayScale in C++ with OpenCV
Also Read: https://opencv.org/about/

In the code snippet given below, first, we enter the location of our image in the machine we are working with.

The snippet provided here is in visual studio but you can use any of the compilers after installing OpenCV and linking required directories.

After it we name the tabs having a grayscale and original colored image as per our wish. Then we read the image.

We use function cvtcolor() to convert the image to it’s Grayscale equivalent.

This function does require changes to the Red, Green, Blue variants of color.

Imshow() function is used to show the converted image and the previous one as well.

Also, note that we auto-size the image so as to overcome any size fit issues.
