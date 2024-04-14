# 手掌鍵盤／五指刪

手體工程學直列分體鍵盤

法寶名曰：五指刪

* 原作者：TIS
* 持寶人：[居戎氏](https://github.com/lotem)

原作在食指下埋有 ProMicro 主控，左右手通過 TRRS 綫通信。
今改爲外置主控盒子，用小麪包板、杜邦綫、積木外殼搭建，
RP2040 SuperMini 主控通過彩排綫連接兩隻手掌的筋脈。

RP2040 主控引脚定义：

 - 1 ~ 5 行 : GP0 ~ GP4
 - 右手 1 ~ 6 列 : GP5 ~ GP10
 - 左手 1 ~ 6 列 : GP14, GP15, GP26 ~ GP29

## 刷写固件

Make example for this keyboard (after setting up vial-qmk build environment):

    make palm:vial

Flashing example for this keyboard:

    make palm:vial:flashing

