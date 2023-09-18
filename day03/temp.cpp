绘图：
//重写绘图事件, 虚函数
void paintEvent(QPaintEvent * event)
{
	QPainter p(this);	//创建画家在窗口上绘图
	p.drawxxx();
	
	p.drawPixmap(0, 0, width(), height(), QPixmap(""));
	p.drawpixmap(x, 0, 80, 80, QPixmap());
	p.drawImage();		//QImage
	p.drawPicture();	//QPicture
	p.drawLine();
	p.drawPimap();	//QBitmap:只有两位，只能显示黑边
}

x += 20;
if(x > width())
{
	x = 0;
}

update();	//简介调用paintEvent()


绘图设备
QPixmap：针对屏幕进行优化了，和平台相关，不能对图片进行修改
QImage：和平台无关，可以对图片进行修改，在线程中绘图
QPicture:保存绘图状态（二进制文件）

QPixmap -> QImage 
QPixmap a;
a.toImage();

QPixmap -> QImage
QImage b;
QPixmap::fromImage(b);

QPainter p;
QPicture pic;
p.begin(&pic); 	//指定绘图设备
p.end();
pic.save("demo.aa");

QPicture temp;
temp.load("demo.aa");

不规则窗口
1）给窗口画一张背景图
2）去边框
3）设定属性（背景透明）
4）移动坐标是相对于屏幕而言

文件操作
QFile file;
file.setFileName();
file.open();
file.write();
file.read();
file.close();

QFileInfo info;
info.size();	//	文件大小
info.fileName();	//文件名

QDataStream：二进制方式
QTXTStream：文本方式操作（指定编码）
QBuffer：内存文件（放在缓冲区中）