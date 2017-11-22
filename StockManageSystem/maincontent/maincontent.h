#ifndef MAINCONTENT_H
#define MAINCONTENT_H

#include <QMainWindow>
#include <QComboBox>
#include <QListView>
#include <QPushButton>
#include <QLabel>
#include <QLineEdit>
#include <QColorDialog>
#include "homepage/homepage.h"
#include "starchoose/starchoose.h"
#include "goldensection/godlensection.h"
#include "plantemplate/plantemplate.h"
#include "peopleplan/peopleplan.h"
#include "twostarshirnk/twostarshrink.h"
#include "threestarshirnk/threestarshirnk.h"
#include "normalcalc/normalcalc.h"
#include "pushcalc/pushcalc.h"
#include "uvslsplic/uvslsplic.h"
#include "registeruser/registeruser.h"
#include "vertool/vertool.h"
#include "groupchat/chattogether/chattogether.h"
#include "groupchat/database/mysql/logindata/logindata.h"
#include "pushmessage/pushmessage.h"

namespace Ui {
class maincontent;
}

class MainContent : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainContent(QWidget *parent = 0);
    ~MainContent();

public slots:
    void closeNowTab(int index);

private slots:
    void on_treeWidgetMenu_doubleClicked(const QModelIndex &index);
    void on_actionLogin_triggered();
    void on_actionRegister_triggered();
    void on_actionChat_triggered();
    void on_actionFogetPwd_triggered();
    void receiveNetStatus(int type);

signals:
    void sendLoginStatus(QString);
    void sendNetStatus(int);

private:
    Ui::maincontent *ui;
    QComboBox *stockTypeCombox;
    HomePage *homePage;
    StarChoose *dwDan;
    StarChoose *widgetTwoZ;
    StarChoose *widgetThreeZ;
    StarChoose *widgetFourZ;
    StarChoose *widgetFiveZ;
    StarChoose *widgetTwoH;
    StarChoose *widgetThreeH;
    QLineEdit *userNameLineEdit;
    QLabel *userNameLabel;
    QLineEdit *pwdLineEdit;
    QLabel *pwdLabel;
    PlanTemplate *planTemplate;
    PeoplePlan *peoplePlan;
    GodlenSection *goldenSection;
    TwoStarShrink *twoStarShrink;
    ThreeStarShrink *threeStarShrink;
    NormalCalc *normalCalc;
    PushCalc *pushCalc;
    UvslSplic *uvslSplic;
    RegisterUser *registerUser;
    VerTool *verTool;
    LoginData *loginData;
    PushMessage pushMessage;

    void initControl();
    void setTextEdit();
    void setUpText();
    void setTreeClickWidget(QString treeItemName);
    void addTabWidget(QWidget *widget, const QString &title);
};

#endif // MAINCONTENT_H
