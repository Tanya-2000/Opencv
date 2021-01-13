#include<opencv2/opencv.hpp>
#include<iostream>

using namespace cv;
using namespace std;

int main()
{
	Mat img = imread("./images/image.jpg");
	if (img.empty())
	{
		cout << "oops error!!!!!!! no image found";
		return -1;
	}
	namedWindow("image", WINDOW_AUTOSIZE);
	imshow("OriginalImage", img);
	Mat img1 = imread("./images/image.jpg", IMREAD_GRAYSCALE);
	imshow("GrayscaleImage", img1);
	waitKey();
	return 0;
}
