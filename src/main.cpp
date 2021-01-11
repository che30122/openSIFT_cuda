#include<opencv2/opencv.hpp>

using namespace cv;

extern void guassain_3conv(const Mat*,Mat*,double/*,int,int,int,int*/);

int main(int argc,char** argv){
	Mat img=imread(argv[1]);
	Mat result=imread(argv[1]);
	double sigma=0.0,input_sigma;
	input_sigma=atof(argv[3]);
	if(input_sigma<=0 || input_sigma>=3.09){
		sigma=3.09;
	}
	else
		sigma=input_sigma;
	guassain_3conv(&img,&result,sigma);
	imwrite(argv[2],result);
	return 0;
}
