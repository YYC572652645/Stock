#ifndef MESSAGEINFO_H
#define MESSAGEINFO_H

namespace MESSAGEINFO
{

const static QString LOGINSUCCESS    = "登录成功";
const static QString LOGINOUTSUCCESS = "退出成功";
const static QString LOGINFAILED     = "登录失败，请检查用户名和密码！";
const static QString LOGINEMPTY      = "用户名或密码不能为空！";
const static QString LOGINUSED       = "请先登录！";
const static QString PASSWORDNOTSAME = "密码不一致！";
const static QString REGISTERSUCCESS = "注册成功！";
const static QString REGISTERFAILED  = "注册失败，该用户名已经有人使用 ！";
const static QString NOTLOGIN        = "未登录";
const static QString NETCONNSUCCESS  = "网络已连接";
const static QString NETCONNFAILED   = "服务器连接失败";
}
#endif // MESSAGEINFO_H
