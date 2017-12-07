#include "maincontent.h"
#include "ui_maincontent.h"
#include "globaldef.h"
#include "messagebox/messagedialog.h"
#include "groupchat/config/qreadini.h"
#include <QDebug>
#include <QDateTime>
#include <windows.h>

/************************   构造函数             ************************/
MainContent::MainContent(QWidget *parent) :
    QMainWindow(parent)
  ,ui(new Ui::maincontent)
  ,stockTypeCombox(NULL)
  ,homePage(NULL)
  ,dwDan(NULL)
  ,widgetTwoZ(NULL)
  ,widgetThreeZ(NULL)
  ,widgetFourZ(NULL)
  ,widgetFiveZ(NULL)
  ,widgetTwoH(NULL)
  ,widgetThreeH(NULL)
  ,userNameLineEdit(NULL)
  ,userNameLabel(NULL)
  ,pwdLineEdit(NULL)
  ,pwdLabel(NULL)
  ,planTemplate(NULL)
  ,peoplePlan(NULL)
  ,goldenSection(NULL)
  ,twoStarShrink(NULL)
  ,threeStarShrink(NULL)
  ,normalCalc(NULL)
  ,pushCalc(NULL)
  ,uvslSplic(NULL)
  ,registerUser(NULL)
  ,verTool(NULL)
{
    ui->setupUi(this);

    this->initControl();
}

/************************   析构函数             ************************/
MainContent::~MainContent()
{
    delete ui;
    SAFEDELETE(homePage);
    SAFEDELETE(dwDan);
    SAFEDELETE(widgetTwoZ);
    SAFEDELETE(widgetThreeZ);
    SAFEDELETE(widgetFourZ);
    SAFEDELETE(widgetFiveZ);
    SAFEDELETE(widgetTwoH);
    SAFEDELETE(widgetThreeH);
    SAFEDELETE(planTemplate);
    SAFEDELETE(peoplePlan);
    SAFEDELETE(goldenSection);
    SAFEDELETE(twoStarShrink);
    SAFEDELETE(threeStarShrink);
    SAFEDELETE(normalCalc);
    SAFEDELETE(pushCalc);
    SAFEDELETE(uvslSplic);
    SAFEDELETE(registerUser);
    SAFEDELETE(verTool);
    SAFEDELETE(loginData);
}

/************************   关闭当前页            ************************/
void MainContent::closeNowTab(int index)
{
    ui->tabWidgetContent->removeTab(index);
}

/************************   初始化控件            ************************/
void MainContent::initControl()
{
    //标题栏添加控件
    stockTypeCombox = new QComboBox(this);
    stockTypeCombox->addItem(GLOBALDEF::BJSTOCK);
    stockTypeCombox->addItem(GLOBALDEF::CQSTOCK);

    stockTypeCombox->setView(new QListView());
    stockTypeCombox->setObjectName(GLOBALDEF::COMBOBOXMENU);

    userNameLineEdit = new QLineEdit(this);
    userNameLabel = new QLabel(this);
    pwdLineEdit= new QLineEdit(this);
    pwdLabel = new QLabel(this);

    userNameLabel->setText(GLOBALDEF::USERNAME);
    pwdLabel->setText(GLOBALDEF::PASSWORD);
    ui->toolBar->setStyleSheet("color:white;");
    userNameLineEdit->setMaximumWidth(GLOBALDEF::LINEDITLEN);
    pwdLineEdit->setMaximumWidth(GLOBALDEF::LINEDITLEN);
    userNameLineEdit->setStyleSheet("color:black;");
    pwdLineEdit->setStyleSheet("color:black;");

    ui->toolBar->addWidget(stockTypeCombox);
    ui->toolBar->addWidget(userNameLabel);
    ui->toolBar->addWidget(userNameLineEdit);
    ui->toolBar->addWidget(pwdLabel);
    ui->toolBar->addWidget(pwdLineEdit);
    ui->toolBar->addAction(ui->actionLogin);
    ui->toolBar->addAction(ui->actionRegister);
    ui->toolBar->addAction(ui->actionFogetPwd);
    ui->toolBar->addAction(ui->actionChat);
    ui->toolBar->addAction(ui->actionOutLogin);

    //添加窗口
    homePage = new HomePage();
    dwDan = new StarChoose();
    widgetTwoZ = new StarChoose(NULL, FRAMTWOZ);
    widgetThreeZ = new StarChoose(NULL, THREESTARZ);
    widgetFourZ = new StarChoose(NULL, FOURSTARZ);
    widgetFiveZ = new StarChoose(NULL, FIVESTARZ);
    widgetTwoH = new StarChoose(NULL,TWOSTARH );
    widgetThreeH = new StarChoose(NULL, THREESTARH);
    planTemplate = new PlanTemplate();
    peoplePlan = new PeoplePlan();
    goldenSection = new GodlenSection();
    twoStarShrink = new TwoStarShrink();
    threeStarShrink = new ThreeStarShrink();
    normalCalc = new NormalCalc();
    pushCalc = new PushCalc();
    uvslSplic = new UvslSplic();
    registerUser = new RegisterUser();
    verTool = new VerTool();
    loginData = new LoginData();

    //设置标题栏可关闭
    ui->tabWidgetContent->setTabsClosable(true);
    connect(ui->tabWidgetContent, SIGNAL(tabCloseRequested(int)), this, SLOT(closeNowTab(int)));

    //设置单行选中
    ui->treeWidgetMenu->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->treeWidgetMenu->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->treeWidgetMenu->setAlternatingRowColors(true);

    //设置为不可编辑
    ui->treeWidgetMenu->setEditTriggers(QAbstractItemView::NoEditTriggers);

    //去掉表头
    ui->treeWidgetMenu->setHeaderHidden(true);

    //设置根据内容调整列宽
    ui->treeWidgetMenu->header()->setStretchLastSection(true);

    //设置字体
    ui->treeWidgetMenu->setFont(QFont(GLOBALDEF::FONTNAME, GLOBALDEF::SMALLFONTSIZE));

    //设置为密码框形式
    pwdLineEdit->setEchoMode(QLineEdit::Password);

    //设置用户名密码
    userNameLineEdit->setText(DATACONFIG.myUserName);
    pwdLineEdit->setText(DATACONFIG.myPassWord);

    //初始化信号与槽
    connect(CHATTOGETHER, SIGNAL(sendNetStatus(int)), this, SLOT(receiveNetStatus(int)));
}

/*********************      添加窗口          *******************/
void MainContent::addTabWidget(QWidget *widget, const QString &title)
{
    if(NULL == widget) return;

    if(ui->tabWidgetContent->indexOf(widget) < 0)
    {
        ui->tabWidgetContent->addTab(widget, title);
    }
    ui->tabWidgetContent->setCurrentWidget(widget);
}

/************************   设置窗口             ************************/
void MainContent::setTreeClickWidget(QString treeItemName)
{
    if(treeItemName.isEmpty()) return;

    if(GLOBALDEF::HOMEPAGE == treeItemName)
    {
        this->addTabWidget(homePage, GLOBALDEF::HOMEPAGE);
        homePage->showWeb(GLOBALDEF::HOMEPAGEURL);
    }
    else if(GLOBALDEF::DWDAN == treeItemName)
    {
        dwDan->setHideType(DWDAN);
        dwDan->setMinimumHeight(600);
        this->addTabWidget(dwDan, GLOBALDEF::DWDAN);
    }
    else if(GLOBALDEF::TWOSTARZ == treeItemName)
    {
        widgetTwoZ->setHideType(FRAMTWOZ);
        this->addTabWidget(widgetTwoZ, GLOBALDEF::TWOSTARZ);
    }
    else if(GLOBALDEF::THREESTARZ == treeItemName)
    {
        widgetThreeZ->setHideType(THREESTARZ);
        this->addTabWidget(widgetThreeZ, GLOBALDEF::THREESTARZ);
    }
    else if(GLOBALDEF::FOURSTARZ == treeItemName)
    {
        widgetFourZ->setHideType(FOURSTARZ);
        this->addTabWidget(widgetFourZ, GLOBALDEF::FOURSTARZ);
    }
    else if(GLOBALDEF::FIVESTARZ == treeItemName)
    {
        widgetFiveZ->setHideType(FIVESTARZ);
        this->addTabWidget(widgetFiveZ, GLOBALDEF::FIVESTARZ);
    }
    else if(GLOBALDEF::TWOSTARH == treeItemName)
    {
        widgetTwoH->setHideType(TWOSTARH);
        this->addTabWidget(widgetTwoH, GLOBALDEF::TWOSTARH);
    }
    else if(GLOBALDEF::THREESTARH == treeItemName)
    {
        widgetThreeH->setHideType(THREESTARH);
        this->addTabWidget(widgetThreeH, GLOBALDEF::THREESTARH);
    }
    else if(GLOBALDEF::PLANTEMPLATE == treeItemName)
    {
        this->addTabWidget(planTemplate, GLOBALDEF::PLANTEMPLATE);
    }
    else if(GLOBALDEF::PEOPLEPLAN == treeItemName)
    {
        this->addTabWidget(peoplePlan, GLOBALDEF::PEOPLEPLAN);
    }
    else if(GLOBALDEF::GOLDENSECTION == treeItemName)
    {
        goldenSection->showWidget();
    }
    else if(GLOBALDEF::TWOSTARSHRINK == treeItemName)
    {
        this->addTabWidget(twoStarShrink, GLOBALDEF::TWOSTARSHRINK);
    }
    else if(GLOBALDEF::THREESTARSHRINK == treeItemName)
    {
        this->addTabWidget(threeStarShrink, GLOBALDEF::THREESTARSHRINK);
    }
    else if(GLOBALDEF::NORMALCALC == treeItemName)
    {
        this->addTabWidget(normalCalc, GLOBALDEF::NORMALCALC);
    }
    else if(GLOBALDEF::TBCALC == treeItemName)
    {
        this->addTabWidget(pushCalc, GLOBALDEF::TBCALC);
    }
    else if(GLOBALDEF::UNIVERSALSPLIC == treeItemName)
    {
        uvslSplic->showWidget();
    }
    else if(GLOBALDEF::VERTOOL == treeItemName)
    {
        verTool->showWidget();
    }
}

/************************   菜单双击事件          ************************/
void MainContent::on_treeWidgetMenu_doubleClicked(const QModelIndex &index)
{
    this->setTreeClickWidget(ui->treeWidgetMenu->currentItem()->text(0));
}

/************************     立刻登录           ************************/
void MainContent::on_actionLogin_triggered()
{
    if(userNameLineEdit->text().isEmpty()|| pwdLineEdit->text().isEmpty())
    {
        MESSAGEBOX->setInfo(GLOBALDEF::SYSTEMINFO, MESSAGEINFO::LOGINEMPTY ,GLOBALDEF::FAILIMG, true);
        return;
    }

    if(loginData->selectData(userNameLineEdit->text(), pwdLineEdit->text()))
    {
        MESSAGEBOX->setInfo(GLOBALDEF::SYSTEMINFO, MESSAGEINFO::LOGINSUCCESS ,GLOBALDEF::SUCCESSIMG, true);

        GLOBALDEF::myUserName = userNameLineEdit->text();

        CHATTOGETHER->initConn();

        INICONFIG->writeIni(userNameLineEdit->text(), pwdLineEdit->text());

        emit sendLoginStatus(GLOBALDEF::myNickName);
    }
    else
    {
        MESSAGEBOX->setInfo(GLOBALDEF::SYSTEMINFO, MESSAGEINFO::LOGINFAILED ,GLOBALDEF::FAILIMG, true);
    }
}

/************************     注册           ************************/
void MainContent::on_actionRegister_triggered()
{
    registerUser->showWidget();
}

/************************     聊天           ************************/
void MainContent::on_actionChat_triggered()
{
    if( GLOBALDEF::myUserName.isEmpty())
    {
        MESSAGEBOX->setInfo(GLOBALDEF::SYSTEMINFO, MESSAGEINFO::LOGINUSED ,GLOBALDEF::FAILIMG, true);
        return;
    }
    CHATTOGETHER->showWidget();
}

/************************     忘记密码           ************************/
void MainContent::on_actionFogetPwd_triggered()
{
    pushMessage.showWidget();
}

/************************     接收网络状态        ************************/
void MainContent::receiveNetStatus(int type)
{
    emit sendNetStatus(type);
}

/************************     退出登录        ************************/
void MainContent::on_actionOutLogin_triggered()
{
    CHATTOGETHER->closeConn();

    GLOBALDEF::myUserName.clear();
    GLOBALDEF::myNickName.clear();
    GLOBALDEF::myVip      = 0;

    emit sendLoginOut();
    MESSAGEBOX->setInfo(GLOBALDEF::SYSTEMINFO, MESSAGEINFO::LOGINOUTSUCCESS ,GLOBALDEF::SUCCESSIMG, true);
}
