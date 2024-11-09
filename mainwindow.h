#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>
#include <QFileDialog>
#include <QPixmap>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);

private slots:
    void openImage();

private:
    QLabel *imageLabel;
    QPushButton *openButton;
};

#endif // MAINWINDOW_H
