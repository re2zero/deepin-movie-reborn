#include <gtest/gtest.h>
#include <QtTest>
#include <QTest>
#include <QTestEventList>
#include <QTimer>
#include "application.h"
#include <unistd.h>
#include "src/vendor/movieapp.h"

using namespace dmr;

TEST(MovieApp, show)
{
    MainWindow* w = dApp->getMainWindow();

    MovieApp *movieapp = dApp->initMovieApp(w);

    QTimer::singleShot(500,[=]{movieapp->show();});
}

//TEST(MovieApp, quit)
//{
//    MainWindow* w = dApp->getMainWindow();

//    MovieApp *movieapp = dApp->initMovieApp(w);

//    QTimer::singleShot(500,[=]{movieapp->quit();});
//}
