file='student.txt'

def main():
    while 1:
        m=enumk()
        if m==1:
            chaxun()
        elif m==2:
            tianjia()
        elif m==3:
            piliang()
        else:
            print('程序结束')
            break
def chaxun():
    stu_new = []
    while 1:
        a=input('请输入学生号（不知道输入*）：')
        b=input('请输入姓名（不知道输入*）：')
        if a!='*':

            fi=open(file,'r',encoding='utf-8')
            for item in fi:
                tmp=dict(eval(item))
                if tmp['id']==a:
                    l = shows(tmp)
                    if l == 'del':
                        print('删除信息成功！')
                        continue
                    elif l == 'cha':
                        change(tmp)
                        stu_new.append(str(tmp)+'\n')
                else:
                    stu_new.append(item)
                    continue
            fi.close()
        elif a=='*' and b!='*':
                                      #针对删除模块的列表
            fi = open(file, 'r',encoding='utf-8')  #读取本地数据库
            for item in fi:
                if item != '':
                    tmp = dict(eval(item))
                    if tmp['name'] == b:
                        l=shows(tmp)
                        if l=='del':
                            print('删除信息成功！')
                            continue
                        elif l=='cha':
                            change(tmp)
                            stu_new.append(str(tmp)+'\n')
                    else:
                        stu_new.append(item)
                        continue
            fi.close()
        else:
            print('信息不足无法查询')
        lp=open(file,'w',encoding='utf-8')
        for item in stu_new:
            lp.write(item)
        lp.close()
        break
def save(stu):
    m=open(file,'a',encoding='utf-8')
    for item in stu:
        m.write(str(item)+'\n')
    m.close()
def shows(tmp):
        print('学号:%s 姓名:%s  英语成绩:%s分   数学成绩:%s分 ' % (tmp['id'],tmp['name'],tmp['el'],tmp['mt']))
        return input('按任意键继续\n（若要删除该学生信息请输入del）\n（若要修改信息请输入cha）')
def enumk():
    print('######################################')
    print('#########    学生档案管理系统   #########')
    print('######################################')
    print('#########    查询学生请输入1    #########')
    print('######################################')
    print('#########    添加学生请输入2    #########')
    print('######################################')
    print('#########    批量浏览请输入3    #########')
    print('######################################')
    print('######################################')
    print('#########################  退出输入0  #')
    print('######################################')
    print('######################################')
    return int(input('请输入：'))
def tianjia():
    stu=[]
    while 1:
        ids=input('学生学号：')
        name=input('学生姓名：')
        el=input('英语成绩：')
        mt= input('数学成绩：')
        info={'id':ids,'name':name,'el':el,'mt':mt}
        stu.append(info)
        k=int(input('你想继续添加吗？继续选1, 退出选0：'))
        if k==1:
            continue
        else:
            save(stu)
            break
def piliang():
    fi = open(file, 'r', encoding='utf-8')
    for item in fi:
        tmp = dict(eval(item))
        print('学号:%s 姓名:%s  英语成绩:%s分   数学成绩:%s分 ' % (tmp['id'], tmp['name'], tmp['el'], tmp['mt']))
    input('按任意键继续')
def change(tmp):
    zu = int(input('修改学号请按1\n修改姓名请按2\n修改英语成绩请按3\n修改数学成绩请按4\n:'))
    if zu == 1:
        tmp['id']=input('请输入新的学号：')
    elif zu==2:
        tmp['name']=input('请输入新的姓名：')
    elif zu==3:
        tmp['el']=input('请输入新的英语成绩：')
    else:
        tmp['mt']=input('请输入新的数学成绩：')
main()
