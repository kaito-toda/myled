# クリスマスなので、点滅するLED。

## 使用方法

myled,Makefileを同じフォルダにインストールし、makeをする。  
sudo insmod myled.ko  
sudo chmod 666 /dev/myled0  

で準備完了。  
'echo 1 > dev/myled0'　　点灯  
echo 2 > dev/myled0　　点滅  
echo 0 > dev/myled0　　消灯  
となっています。

## 点滅について

ヘッダーファイルにlinux/delay.hを追加して、ssleep(1)を挟んで点滅させています。（ソースコード36~41行目）  
クリスマスのデコレーションにぜひ。（心もとない明るさですが。）
