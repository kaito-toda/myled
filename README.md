# クリスマスなので、点滅するLED。
##使用道具
・ラズベリーパイ４　　
・LED　　
・ブレッドボード　　
・抵抗　　
・ジャンパー線　　

## 使用方法
###インストール
ラズベリーパイ上で　`git clone https://github.com/kaito-toda/myled.git` 　　
myled,Makefileが同じディレクトリにインストールしてあることを確認し、ディレクトリ内で`make`　　
同じファイル上にmyled.koができていれば準備完了。  
###実行

`sudo insmod myled.ko`  
`sudo chmod 666 /dev/myled0`    
 その後実行したい処理を入力する。　　
 それぞれ
`echo 1 > dev/myled0`　　点灯  
`echo 2 > dev/myled0`　　点滅  
`echo 0 > dev/myled0`　　消灯  
となっている。

`sudo rmmod myled`　　
で閉じることができます。

## 点滅について

ヘッダーファイルに`linux/delay.h`を追加して、`ssleep(1)`を挟んで点滅させています。（ソースコード36~41行目）  
クリスマスのデコレーションにぜひ。（心もとない明るさですが。）  
##動作の様子
<https://www.youtube.com/watch?v=3cMSLxdqIsY>
