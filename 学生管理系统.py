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
            print('�������')
            break
def chaxun():
    stu_new = []
    while 1:
        a=input('������ѧ���ţ���֪������*����')
        b=input('��������������֪������*����')
        if a!='*':

            fi=open(file,'r',encoding='utf-8')
            for item in fi:
                tmp=dict(eval(item))
                if tmp['id']==a:
                    l = shows(tmp)
                    if l == 'del':
                        print('ɾ����Ϣ�ɹ���')
                        continue
                    elif l == 'cha':
                        change(tmp)
                        stu_new.append(str(tmp)+'\n')
                else:
                    stu_new.append(item)
                    continue
            fi.close()
        elif a=='*' and b!='*':
                                      #���ɾ��ģ����б�
            fi = open(file, 'r',encoding='utf-8')  #��ȡ�������ݿ�
            for item in fi:
                if item != '':
                    tmp = dict(eval(item))
                    if tmp['name'] == b:
                        l=shows(tmp)
                        if l=='del':
                            print('ɾ����Ϣ�ɹ���')
                            continue
                        elif l=='cha':
                            change(tmp)
                            stu_new.append(str(tmp)+'\n')
                    else:
                        stu_new.append(item)
                        continue
            fi.close()
        else:
            print('��Ϣ�����޷���ѯ')
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
        print('ѧ��:%s ����:%s  Ӣ��ɼ�:%s��   ��ѧ�ɼ�:%s�� ' % (tmp['id'],tmp['name'],tmp['el'],tmp['mt']))
        return input('�����������\n����Ҫɾ����ѧ����Ϣ������del��\n����Ҫ�޸���Ϣ������cha��')
def enumk():
    print('######################################')
    print('#########    ѧ����������ϵͳ   #########')
    print('######################################')
    print('#########    ��ѯѧ��������1    #########')
    print('######################################')
    print('#########    ���ѧ��������2    #########')
    print('######################################')
    print('#########    �������������3    #########')
    print('######################################')
    print('######################################')
    print('#########################  �˳�����0  #')
    print('######################################')
    print('######################################')
    return int(input('�����룺'))
def tianjia():
    stu=[]
    while 1:
        ids=input('ѧ��ѧ�ţ�')
        name=input('ѧ��������')
        el=input('Ӣ��ɼ���')
        mt= input('��ѧ�ɼ���')
        info={'id':ids,'name':name,'el':el,'mt':mt}
        stu.append(info)
        k=int(input('�����������𣿼���ѡ1, �˳�ѡ0��'))
        if k==1:
            continue
        else:
            save(stu)
            break
def piliang():
    fi = open(file, 'r', encoding='utf-8')
    for item in fi:
        tmp = dict(eval(item))
        print('ѧ��:%s ����:%s  Ӣ��ɼ�:%s��   ��ѧ�ɼ�:%s�� ' % (tmp['id'], tmp['name'], tmp['el'], tmp['mt']))
    input('�����������')
def change(tmp):
    zu = int(input('�޸�ѧ���밴1\n�޸������밴2\n�޸�Ӣ��ɼ��밴3\n�޸���ѧ�ɼ��밴4\n:'))
    if zu == 1:
        tmp['id']=input('�������µ�ѧ�ţ�')
    elif zu==2:
        tmp['name']=input('�������µ�������')
    elif zu==3:
        tmp['el']=input('�������µ�Ӣ��ɼ���')
    else:
        tmp['mt']=input('�������µ���ѧ�ɼ���')
main()
