#include <QCoreApplication>
#include <QDebug>

#include "test.h"
#include "animal.h"

void display(QString* value){
    qInfo()<<"The pointer: "<<value;
    qInfo()<<"The object: "<<&value<<" a copy of the pointer";
    qInfo()<<"The data: "<<*value;
    qInfo()<<"The pointer size: "<<sizeof(value);
    qInfo()<<"The size: "<<sizeof(*value);
    qInfo("");
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    /*QString name = "juan";
    QString* description = new QString("Hola");

    display(&name);
    display(description);

    qInfo()<<name.length();
    qInfo()<<description->length();

    delete description; //=0
    display(description);*/
    test* padre = new test(&a);
    padre->dog=new animal(padre);

    //delete padre; // NO es necesario si lo hacemos así con herencias porque al cargarme el padre me cargo al hijo y limpio la memoria

    return a.exec();
    //a deconstructed
}
