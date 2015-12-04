#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
#include <QProcess>
#include <QDebug>
#include <QDir>
#include <QString>
#include <QFileInfo>
#include "checkPID.h"
#include "opencv.hpp"
#include "Windows.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_capture_pushButton_clicked();

    void timeOut();

private:
    Ui::MainWindow *ui;
    QDir dir;


};

#endif // MAINWINDOW_H
