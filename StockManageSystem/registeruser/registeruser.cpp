#include "registeruser.h"
#include "ui_registeruser.h"
#include "globaldef.h"
#include "messagebox/messagedialog.h"

/************************   构造函数              ************************/
RegisterUser::RegisterUser(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::registeruser)
  ,titleBar(NULL)
  ,loginData(NULL)
{
    ui->setupUi(this);
    this->initControl();
}

/************************   析构函数              ************************/
RegisterUser::~RegisterUser()
{
    delete ui;
}

void RegisterUser::showWidget()
{
    this->show();
}

/************************   初始化控件              ************************/
void RegisterUser::initControl()
{
    titleBar = new TitleBar(this);
    loginData = new LoginData();

    titleBar->setTitle(GLOBALDEF::REGISTERUSER);
    titleBar->setIcon(GLOBALDEF::LOGOIMG);

    titleBar->subButton(TITLEBAR::MAXMINWIDGET);

    this->setWindowModality(Qt::ApplicationModal);
    this->setWindowFlags(Qt::CoverWindow | Qt::FramelessWindowHint);
}

/************************   改变事件              ************************/
void RegisterUser::resizeEvent(QResizeEvent *event)
{
    titleBar->resize(this->width(), titleBar->getTitleBarHeight());
}

/************************   确认注册              ************************/
void RegisterUser::on_pushButtonOk_clicked()
{
    UserData data;

    if(ui->lineEditPassword->text() != ui->lineEditCofPassWord->text())
    {
        MESSAGEBOX->setInfo(GLOBALDEF::SYSTEMINFO, MESSAGEINFO::PASSWORDNOTSAME ,GLOBALDEF::FAILIMG, true);
        return;
    }

    data.userName = ui->lineEditUserName->text();
    data.passWord = ui->lineEditPassword->text();
    data.nickName = ui->lineEditNickName->text();
    data.email = ui->lineEditEmail->text();
    data.phone = ui->lineEditPhoneNumber->text();

    if(loginData->insertData(data))
    {
        MESSAGEBOX->setInfo(GLOBALDEF::SYSTEMINFO, MESSAGEINFO::REGISTERSUCCESS ,GLOBALDEF::SUCCESSIMG, true);
    }
    else
    {
        MESSAGEBOX->setInfo(GLOBALDEF::SYSTEMINFO, MESSAGEINFO::REGISTERFAILED ,GLOBALDEF::FAILIMG, true);
    }
}
