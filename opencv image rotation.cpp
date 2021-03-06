#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;

Mat rotate(Mat src, double a)
{
    Mat dst;
    std::cout << "Input the angle" << endl;
    cin >> a;
    Point2f pt(src.cols / 2., src.rows / 2.);
    Mat r = getRotationMatrix2D(pt, a, 0.7);

    warpAffine(src, dst, r, Size(src.cols, src.rows));
    return dst;
}

int main()
{
    Mat src = imread("D://test.jpg");
    if (src.empty())
    {
        cout << "Could not open or find the image" << endl;
        cin.get(); //wait for any key press
        return -1;
    }
    Mat dst;
    dst = rotate(src, 10);
    String windowName = "src";
    namedWindow(windowName, WINDOW_NORMAL);
    imshow("src", src);
    String windowNamee = "dst";
    namedWindow(windowNamee, WINDOW_NORMAL);
    imshow("dst", dst);
    waitKey(0);
    return 0;
}