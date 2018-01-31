#include <QCoreApplication>
#include <QNetworkAccessManager>

#include <iostream>
#include <chrono>
#include <thread>



int main(int argc, char* argv[])
{
    std::cout << "Hello World" << std::endl;
    
    QCoreApplication app(argc, argv);
    QNetworkAccessManager mgr;

    return 0;
}
