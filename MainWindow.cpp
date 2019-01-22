#include "MainWindow.hpp"
#include "ui_MainWindow.h"
#include <QPushButton>
#include <QLayout>
#include <QGridLayout>
#include <QSizePolicy>
#include <QSize>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QGridLayout *grd = new QGridLayout;

    button1 = new QPushButton("Close Window");
    button1->setSizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
    ui->centralWidget->setLayout(grd);

    grd->addWidget(button1);

    connect(button1, &QPushButton::clicked, this, &QMainWindow::close);
}

MainWindow::~MainWindow()
{
    delete ui;
}
