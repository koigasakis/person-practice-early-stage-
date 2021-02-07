ids=int(input('(是的话输入1，不是输入0)\n你是会员吗？:'))
if ids==1:
    money=int(input('您(VIP)花了多少钱？'))
    if money>=200:
        money=money*0.8
        print('恭喜你(vip)消费满200元，享受8折优惠，你的实际应付金额为：',money)
    elif 100<=money<200:
        money = money * 0.85
        print('恭喜你(vip)消费满100元，享受8.5折优惠，你的实际应付金额为：', money)
    elif 0<=money<100:
        money = money * 0.9
        print('恭喜你(vip)消费满0元，享受9折优惠，你的实际应付金额为：', money)
    else:
        print('非法金额')
else:
    money = int(input('您(非VIP)花了多少钱？'))
    if money >= 200:
        money=money*0.95
        print('恭喜你(非vip)消费满200元，享受9.5折优惠，你的实际应付金额为：', money)
    elif 0<=money<200:
        print('你(非vip)消费不足200元，不享受折扣优惠，你的实际应付金额为：', money)
    else:
        print('非法金额')
import os
os.system('pause')
