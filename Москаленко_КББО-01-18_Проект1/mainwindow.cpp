#include <QMessageBox>
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

    /// in future create message box with fill data about books.
    void MainWindow::on_pushButton_clicked()
    {
        bs.add_book(current_shelf , Book(23 , _qstr("test")));
    }

    void MainWindow::on_pushButton_2_clicked()
    {
        this->bs.add_shelf();

        this->ui->listWidget->clear();

        for(int i = 0; i < bs._shelfs.size(); i++)
        {
            this->ui->listWidget->addItem(QString::number(i));
        }


    }


    void MainWindow::on_listWidget_itemClicked(QListWidgetItem *item)
    {
        ui->listWidget_2->clear();

        current_shelf = item->text().toInt(0,10);
        for(auto&& [name , pages] : bs._shelfs[current_shelf].get_books())
        {
            ui->listWidget_2->addItem(QString(name));
        }

    }
