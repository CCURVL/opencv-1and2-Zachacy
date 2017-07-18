
#include <iostream>
#include <opencv/highgui.h>
#include <opencv2\opencv.hpp>
using namespace std;
using namespace cv;
int HW01_TestFunction();
int HW02_ReadAndShowData(int numberOfImgs);
void mean_filter(Mat &image);


int main() {
	/*HW01_TestFunction();
	waitKey(0);
	destroyAllWindows();*/
	
	HW02_ReadAndShowData(8);

	waitKey(0);
	return 0;
}
void mean_filter(Mat &image) {
	int i = 0 , j = 0;
	Mat_<Vec3b>::const_iterator ptr = image.begin<Vec3b>();
	for (;  ptr != image.end<Vec3b>(); ptr++) {
		
	}
}

int HW01_TestFunction() {
	// Fill your answer here
	Mat image = imread("C:/Users/USER/Desktop/opencv-1and2-Zachacy/testImage/lena.jpg", 3);
	Mat Gray_image;
	Mat Binary_image;
	cvtColor(image, Gray_image, CV_BGR2GRAY);
	threshold(Gray_image, Binary_image, 124,255, THRESH_BINARY);
	imshow("Display_RGB", image);
	imshow("Display_Gray", Gray_image);
	imshow("Display_Binary", Binary_image);
	moveWindow("Display_RGB", 50, 50);
	moveWindow("Display_Gray", 550, 50);
	moveWindow("Display_Binary", 1050, 50);
	return 0;
}

int HW02_ReadAndShowData(int numberOfImgs) {
	// Fill your answer here
	Mat image;
	Mat Gray_image;
	Mat Binary_image;
	string name;
	while (numberOfImgs > 0) {
		name = "C:/Users/USER/Desktop/opencv-1and2-Zachacy/testImage/capture/" + to_string(9-numberOfImgs) + ".jpg";
		image = imread(name, 3);
		cvtColor(image, Gray_image, COLOR_RGB2GRAY);
		threshold(Gray_image, Binary_image, 124,255, THRESH_BINARY);
		imshow("Display_RGB", image);
		imshow("Display_Gray", Gray_image);
		imshow("Display_Binary", Binary_image);
		moveWindow("Display_RGB", 50, 50);
		moveWindow("Display_Gray", 550, 50);
		moveWindow("Display_Binary",1050, 50);
		waitKey(0);
		destroyAllWindows();
		numberOfImgs--;
	}
	return 0;
}





