//#include <opencv2/opencv.hpp>
//#include <iostream>
//using namespace cv;
//int main()
//{
//	VideoCapture cap;
//
//	cap.open(0);
//
//	if (!cap.isOpened())
//	{
//		std::cout << "���ܴ���Ƶ�ļ�" << std::endl;
//		return -1;
//
//	}
//	double fps = cap.get(CAP_PROP_FPS);
//	std::cout << "fps" << fps << std::endl;
//	while (1)
//	{
//		cv::Mat frame;
//
//		bool rSucess = cap.read(frame);
//		if (!rSucess)
//		{
//			std::cout << "���ܴ���Ƶ�ļ��ж�ȡ����" << std::endl;
//			break;
//
//		}
//		else
//		{
//			GaussianBlur(frame, frame, Size(9, 9), 0, BORDER_DEFAULT);
//			cv::imshow("frame", frame);
//		}
//		waitKey(30);
//	}
//}
