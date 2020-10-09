#include<iostream>
#include<opencv2/opencv.hpp>
using namespace cv;
using namespace std;
int main()
{
	cv::Mat srcMat = imread("G:/picture/11.png",0);
	cv::Mat result1, result2;
	threshold(srcMat, result1, 100, 255, THRESH_BINARY);
	adaptiveThreshold(srcMat, result2, 255, ADAPTIVE_THRESH_GAUSSIAN_C, THRESH_BINARY_INV,15,10);
	imshow("result1", result1);
	imshow("result2", result2);
	waitKey(0);
}