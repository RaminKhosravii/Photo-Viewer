#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent)
{
    imageLabel = new QLabel(this);
    imageLabel->setAlignment(Qt::AlignCenter);

    openButton = new QPushButton("Open Image", this);
    connect(openButton, &QPushButton::clicked, this, &MainWindow::openImage);

    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(openButton);
    layout->addWidget(imageLabel);

    QWidget *centralWidget = new QWidget(this);
    centralWidget->setLayout(layout);
    setCentralWidget(centralWidget);

    setWindowTitle("Photo Viewer");
    resize(800, 600);
}

void MainWindow::openImage()
{
    QString fileName = QFileDialog::getOpenFileName(this, "Open Image File", "", "Images (*.png *.jpg *.jpeg *.bmp *.gif)");
    if (!fileName.isEmpty()) {
        QPixmap image(fileName);
        imageLabel->setPixmap(image.scaled(imageLabel->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));
    }
}
