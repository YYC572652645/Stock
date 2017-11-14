#include "maincontent.h"
#include "ui_maincontent.h"
#include "globaldef.h"
#include "messagebox/messagedialog.h"
#include <QDebug>
#include <QDateTime>

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


    //添加窗口
    homePage = new HomePage();
    dwDan = new StarChoose();
    widgetTwoZ = new StarChoose();
    widgetThreeZ = new StarChoose();
    widgetFourZ = new StarChoose();
    widgetFiveZ = new StarChoose();
    widgetTwoH = new StarChoose();
    widgetThreeH = new StarChoose();
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
    ui->treeWidgetMenu->setFont(QFont("ZYsong", 12));

    ui->groupBoxChat->hide();

    fontColor = QColor(0,0,0);
}

/************************   设置窗口             ************************/
void MainContent::setTreeClickWidget(QString treeItemName)
{
    if(treeItemName.isEmpty()) return;

    if(GLOBALDEF::HOMEPAGE == treeItemName)
    {
        ui->tabWidgetContent->addTab(homePage, GLOBALDEF::HOMEPAGE);

        homePage->showWeb(GLOBALDEF::HOMEPAGEURL);
        ui->tabWidgetContent->setCurrentWidget(homePage);
    }
    else if(GLOBALDEF::DWDAN == treeItemName)
    {
        dwDan->setHideType(DWDAN);
        ui->tabWidgetContent->addTab(dwDan, GLOBALDEF::DWDAN);
        ui->tabWidgetContent->setCurrentWidget(dwDan);
    }
    else if(GLOBALDEF::TWOSTARZ == treeItemName)
    {
        widgetTwoZ->setHideType(FRAMTWOZ);
        ui->tabWidgetContent->addTab(widgetTwoZ, GLOBALDEF::TWOSTARZ);
        ui->tabWidgetContent->setCurrentWidget(widgetTwoZ);
    }
    else if(GLOBALDEF::THREESTARZ == treeItemName)
    {
        widgetThreeZ->setHideType(THREESTARZ);
        ui->tabWidgetContent->addTab(widgetThreeZ, GLOBALDEF::THREESTARZ);
        ui->tabWidgetContent->setCurrentWidget(widgetThreeZ);
    }
    else if(GLOBALDEF::FOURSTARZ == treeItemName)
    {
        widgetFourZ->setHideType(FOURSTARZ);
        ui->tabWidgetContent->addTab(widgetFourZ, GLOBALDEF::FOURSTARZ);
        ui->tabWidgetContent->setCurrentWidget(widgetFourZ);
    }
    else if(GLOBALDEF::FIVESTARZ == treeItemName)
    {
        widgetFiveZ->setHideType(FIVESTARZ);
        ui->tabWidgetContent->addTab(widgetFiveZ, GLOBALDEF::FIVESTARZ);
        ui->tabWidgetContent->setCurrentWidget(widgetFiveZ);
    }
    else if(GLOBALDEF::TWOSTARH == treeItemName)
    {
        widgetTwoH->setHideType(TWOSTARH);
        ui->tabWidgetContent->addTab(widgetTwoH, GLOBALDEF::TWOSTARH);
        ui->tabWidgetContent->setCurrentWidget(widgetTwoH);
    }
    else if(GLOBALDEF::THREESTARH == treeItemName)
    {
        widgetThreeH->setHideType(THREESTARH);
        ui->tabWidgetContent->addTab(widgetThreeH, GLOBALDEF::THREESTARH);
        ui->tabWidgetContent->setCurrentWidget(widgetThreeH);
    }
    else if(GLOBALDEF::PLANTEMPLATE == treeItemName)
    {
        ui->tabWidgetContent->addTab(planTemplate, GLOBALDEF::PLANTEMPLATE);
        ui->tabWidgetContent->setCurrentWidget(planTemplate);
    }
    else if(GLOBALDEF::PEOPLEPLAN == treeItemName)
    {
        ui->tabWidgetContent->addTab(peoplePlan, GLOBALDEF::PEOPLEPLAN);
        ui->tabWidgetContent->setCurrentWidget(peoplePlan);
    }
    else if(GLOBALDEF::GOLDENSECTION == treeItemName)
    {
        goldenSection->show();
    }
    else if(GLOBALDEF::TWOSTARSHRINK == treeItemName)
    {
        ui->tabWidgetContent->addTab(twoStarShrink, GLOBALDEF::TWOSTARSHRINK);
        ui->tabWidgetContent->setCurrentWidget(twoStarShrink);
    }
    else if(GLOBALDEF::THREESTARSHRINK == treeItemName)
    {
        ui->tabWidgetContent->addTab(threeStarShrink, GLOBALDEF::THREESTARSHRINK);
        ui->tabWidgetContent->setCurrentWidget(threeStarShrink);
    }
    else if(GLOBALDEF::NORMALCALC == treeItemName)
    {
        ui->tabWidgetContent->addTab(normalCalc, GLOBALDEF::NORMALCALC);
        ui->tabWidgetContent->setCurrentWidget(normalCalc);
    }
    else if(GLOBALDEF::TBCALC == treeItemName)
    {
        ui->tabWidgetContent->addTab(pushCalc, GLOBALDEF::TBCALC);
        ui->tabWidgetContent->setCurrentWidget(pushCalc);
    }
    else if(GLOBALDEF::UNIVERSALSPLIC == treeItemName)
    {
        uvslSplic->show();
    }
    else if(GLOBALDEF::VERTOOL == treeItemName)
    {
        verTool->show();
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
        MESSAGEBOX->setInfo(GLOBALDEF::SYSTEMINFO, "用户名或密码不能为空" ,GLOBALDEF::FAILIMG, true);
        return;
    }

    if(userNameLineEdit->text() == "admin" && pwdLineEdit->text() == "admin")
    {
        MESSAGEBOX->setInfo(GLOBALDEF::SYSTEMINFO, "登录成功" ,GLOBALDEF::SUCCESSIMG, true);
        static int count = 0;
        if(count == 0) ui->toolBar->addSeparator();

        count ++;
        ui->toolBar->addAction(ui->actionAdmin);
    }
    else
    {
        MESSAGEBOX->setInfo(GLOBALDEF::SYSTEMINFO, "登录失败" ,GLOBALDEF::FAILIMG, true);
    }
}

/************************     注册           ************************/
void MainContent::on_actionRegister_triggered()
{
    registerUser->show();
}

/************************     聊天           ************************/
void MainContent::on_actionChat_triggered()
{
    static int count = 0;

    if(count % 2 == 0)
    {
        ui->groupBoxChat->show();
    }
    else
    {
        ui->groupBoxChat->hide();
    }

    count ++;
}


/*******************        设置文本              ***********************/
void MainContent::setUpText()
{
    ui->textBrowserContent->setTextColor(Qt::blue);
    ui->textBrowserContent->setCurrentFont(QFont("ZYsong", 12, true));
    ui->textBrowserContent->append("[admin] " + QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss"));

    ui->textBrowserContent->setTextColor(fontColor);

    QFont font = ui->fontComboBoxFont->currentFont();
    font.setPointSize(ui->comboBoxSize->currentText().toInt());
    ui->textBrowserContent->setCurrentFont(font);

    ui->textBrowserContent->append(ui->textEditSendText->toPlainText());
}
void MainContent::on_pushButtonColor_clicked()
{
    fontColor = QColorDialog::getColor(Qt::black, this);

    QPalette palette = ui->pushButtonColor->palette();
    palette.setColor(QPalette::Button, fontColor);
    ui->pushButtonColor->setPalette(palette);
    ui->pushButtonColor->setAutoFillBackground(true);
    ui->pushButtonColor->setFlat(true);

    this->setTextEdit();
}

void MainContent::on_comboBoxSize_currentIndexChanged(const QString &arg1)
{
    this->setTextEdit();
}

void MainContent::on_fontComboBoxFont_currentIndexChanged(const QString &arg1)
{
     this->setTextEdit();
}

/************************   设置文本框              ************************/
void MainContent::setTextEdit()
{
    QFont font = ui->fontComboBoxFont->currentFont();

    font.setPointSize(ui->comboBoxSize->currentText().toInt());

    ui->textEditSendText->setFont(font);

    ui->textEditSendText->setTextColor(fontColor);

    ui->textEditSendText->setTextColor(fontColor);

    QString text = ui->textEditSendText->toPlainText();

    ui->textEditSendText->clear();

    ui->textEditSendText->setText(text);
}

void MainContent::on_pushButtonSend_clicked()
{
    this->setUpText();

    ui->textEditSendText->clear();
}
