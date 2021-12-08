// #include <opencv2/core.hpp>
// #include <opencv2/imgcodecs.hpp>
// #include <opencv2/highgui.hpp>
// #include <iostream>
// using namespace cv;
// int main()
// {
//     std::string image_path = samples::findFile("test.jpg");
//     Mat img = imread(image_path, cv::IMREAD_GRAYSCALE);
//     if(img.empty())
//     {
//         std::cout << "Could not read the image: " << image_path << std::endl;
//         return 1;
//     }
//     imshow("Display window", img);
//     int k = waitKey(0); // Wait for a keystroke in the window
//     if(k == 's')
//     {
//         imwrite("starry_night.png", img);
//     }
//     return 0;
// }




// #include <stdio.h>
// #include <opencv2/opencv.hpp>

// using namespace cv;

// int main(int argc, char** argv )
// {
//     if ( argc != 2 )
//     {
//         printf("usage: DisplayImage.out <Image_Path>\n");
//         return -1;
//     }

//     Mat image;
//     image = imread( argv[1], 1 );

//     if ( !image.data )
//     {
//         printf("No image data \n");
//         return -1;
//     }
//     else 
//     {
//         printf("image found \n");
//     }
//     namedWindow("Display Image", WINDOW_AUTOSIZE );
//     imshow("Display Image", image);

//     waitKey(0);

//     return 0;
// }



#include <opencv2/opencv.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/highgui/highgui_c.h>
#include <iostream>

int main(int, char**) {
    // open the first webcam plugged in the computer
    cv::VideoCapture camera(0);
    if (!camera.isOpened()) {
        std::cerr << "ERROR: Could not open camera" << std::endl;
        return 1;
    }

    // create a window to display the images from the webcam
    cv::namedWindow("Webcam", CV_WINDOW_AUTOSIZE);

    // this will contain the image from the webcam
    cv::Mat frame;
        
    // capture the next frame from the webcam
    camera >> frame;
    
    // display the frame until you press a key
    while (1) {
        // show the image on the window
        camera >> frame;
        cv::imshow("Webcam", frame);
        // wait (10ms) for a key to be pressed
        if (cv::waitKey(1) == 'e')
            break;
    }
    return 0;
}