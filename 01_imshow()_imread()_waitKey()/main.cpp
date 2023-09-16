#include <iostream>
#include <opencv2/opencv.hpp>
// #include<opencv2/highgui.hpp>

int main()
{
    cv::Mat img;
    img = cv::imread("/home/vmdev/git/OpenCV/ocv.png"); // imread() works for image reading for any directory.
    // img = cv::imread("/home/vmdev/git/OpenCV/ocv.png", cv::IMREAD_GRAYSCALE);   //For the grayscale image
    // img = cv::imread("/home/vmdev/git/OpenCV/ocv.png", cv::IMREAD_COLOR); // For the color image

    cv::imshow("My_Window", img);

    cv::waitKey(0); // If I do not use waitKey, image will not show. The digit is mili second. 0 means press any key to close

    return 0;
}
