ids=int(input('(�ǵĻ�����1����������0)\n���ǻ�Ա��:'))
if ids==1:
    money=int(input('��(VIP)���˶���Ǯ��'))
    if money>=200:
        money=money*0.8
        print('��ϲ��(vip)������200Ԫ������8���Żݣ����ʵ��Ӧ�����Ϊ��',money)
    elif 100<=money<200:
        money = money * 0.85
        print('��ϲ��(vip)������100Ԫ������8.5���Żݣ����ʵ��Ӧ�����Ϊ��', money)
    elif 0<=money<100:
        money = money * 0.9
        print('��ϲ��(vip)������0Ԫ������9���Żݣ����ʵ��Ӧ�����Ϊ��', money)
    else:
        print('�Ƿ����')
else:
    money = int(input('��(��VIP)���˶���Ǯ��'))
    if money >= 200:
        money=money*0.95
        print('��ϲ��(��vip)������200Ԫ������9.5���Żݣ����ʵ��Ӧ�����Ϊ��', money)
    elif 0<=money<200:
        print('��(��vip)���Ѳ���200Ԫ���������ۿ��Żݣ����ʵ��Ӧ�����Ϊ��', money)
    else:
        print('�Ƿ����')
import os
os.system('pause')
