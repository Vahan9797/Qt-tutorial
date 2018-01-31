#include <QApplication>
#include <QPushButton>
#include <QProgressBar>
#include <QSlider>

//#include "window.h"

int main(int argc, char **argv) {
    QApplication app (argc, argv);

    QWidget window;
    window.setFixedSize(400, 300);

//    QFont font ("Courier");
//    QIcon icon ("/home/vahan/Desktop/mini.jpg");
//    // for Linux and other OS's, there is a way to set icon by static method:
//    // QIcon Qicon::fromTheme ( const QString &name, const QIcon &fallback = QIcon());
//    // e.g. button.setIcon(QIcon::fromTheme("face-smile"));

//    auto *button1 = new QPushButton("Hello World!", &window);
//    auto *button2 = new QPushButton("other", button1);
//    button2->setGeometry(10, 10, 80, 30);

//    button1->setFixedSize(400, 300);
//    button1->setFont(font);
//    button1->setIcon(icon);
//    button1->setToolTip("A tooltip");
    auto *progressBar = new QProgressBar(&window);
    progressBar->setRange(0, 100);
    progressBar->setValue(0);
    progressBar->setGeometry(10, 10, 80, 30);

    auto *slider = new QSlider(&window);
    slider->setOrientation(Qt::Horizontal);
    slider->setRange(0, 100);
    slider->setValue(0);
    slider->setGeometry(10, 40, 180, 30);

    window.show();
    QObject::connect(slider, SIGNAL (valueChanged(int)), progressBar, SLOT (setValue(int)));

    return app.exec();
}
