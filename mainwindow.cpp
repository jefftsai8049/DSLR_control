#include "mainwindow.h"
#include "ui_mainwindow.h"



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_capture_pushButton_clicked()
{

    QProcess p;
    if(!checkPID::isRunning("CameraControl.exe"))
    {
        qDebug() << "start exe file";
        p.start("C:/digiCamControl/CameraControl.exe");

    }

    qDebug() << "timeout";
    INPUT ip;

    // Pause for 5 seconds.
    Sleep(6000);
    qDebug() << "timeout";

    // Set up a generic keyboard event.
    ip.type = INPUT_KEYBOARD;
    ip.ki.wScan = 0; // hardware scan code for key
    ip.ki.time = 0;
    ip.ki.dwExtraInfo = 0;

    // Press the "A" key
    ip.ki.wVk = 0x41; // virtual-key code for the "a" key
    ip.ki.dwFlags = 0; // 0 for key press
    SendInput(1, &ip, sizeof(INPUT));

    //    // Release the "A" key
    ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
    SendInput(1, &ip, sizeof(INPUT));


    Sleep(3000);
    p.close();

    QString dirName = "C:/Users/jefftsai/Pictures/Default";
    dir.setPath(dirName);
    QStringList dirList = dir.entryList(QDir::Files,QDir::Name);
    QString imgFileName = dirName+"/"+dirList[dirList.size()-1];
    cv::Mat src = cv::imread(imgFileName.toStdString());
    cv::resize(src,src,cv::Size(src.cols/4,src.rows/4));
    cv::imshow("src",src);
}

void MainWindow::timeOut()
{

}

