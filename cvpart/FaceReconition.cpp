/*******************************************************************************
 * Author :          Nill_Rhoads
 * Email :           nillrhoads@gmail.com
 * Last modified :   2016-05-13 10:30
 * Filename :        FaceReconition.cpp
 * Description :     
 * *****************************************************************************/


#include "FaceReconition.hpp"

FaceReconition::FaceReconition()
{}

FaceReconition::~FaceReconition()
{}

void FaceReconition::startToReconition()
{
    cout << "start to reconition" << endl;

    // start ViceoCapture

    VideoCapture cap(0);
    if(!cap.isOpened())
    {
      cout << "Open failed Pliease Check your Cramer Connect" << endl;
      return;   
    }

    Mat frame;
    Mat edges;
    bool stop = false;

    while(!stop)
    {
        cap >> frame;
        cvtColor(frame,edges,CV_BGR2GRAY);
        GaussianBlur(edges,edges,Size(7,7),1.5,1.5);
        Canny(edges,edges,0,30,3);

        imshow("current Video",edges);

        if(waitKey(30)>=0)
        {
            stop = true;
        }

    
    }



}

