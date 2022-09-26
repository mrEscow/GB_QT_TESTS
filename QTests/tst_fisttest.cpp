#include <QtTest>

// add necessary includes here

class FistTest : public QObject
{
    Q_OBJECT

public:
    FistTest();
    ~FistTest();

private slots:
    void test_case1();

};

FistTest::FistTest()
{

}

FistTest::~FistTest()
{

}

void FistTest::test_case1()
{

}

QTEST_APPLESS_MAIN(FistTest)

#include "tst_fisttest.moc"
