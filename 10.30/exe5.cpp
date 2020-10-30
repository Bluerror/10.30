#include <iostream>
#include <opencv2/opencv.hpp>
using namespace cv;
using namespace std;

int main()
{
	VideoCapture cap(0);
	double scale = 1;

	double i_minH = 0;
	double i_maxH = 50;
	double i_minS = 30;
	double i_maxS = 255;
	double i_minV = 55;
	double i_maxV = 255;

	while (1)
	{
		Mat frame;
		Mat hsvMat;
		Mat detectMat;
		Mat mask;
		Mat frame1;

		cap >> frame;
		Size ResImgSiz = Size(frame.cols * scale, frame.rows * scale);
		Mat rFrame = Mat(ResImgSiz, frame.type());
		resize(frame, rFrame, ResImgSiz, INTER_LINEAR);

		cvtColor(rFrame, hsvMat, COLOR_BGR2HSV);

		rFrame.copyTo(detectMat);
		cv::inRange(hsvMat, Scalar(i_minH, i_minS, i_minV), Scalar(i_maxH, i_maxS, i_maxV), detectMat);

		imshow("whie: in the range", detectMat);
		imshow("frame1", rFrame);
		

		blur(frame,frame1, Size(7,7), Point(-1, -1), BORDER_DEFAULT);

		frame1.copyTo(frame, detectMat);
		cv::imshow("frame", frame);
		

		waitKey(30);
	}


}
