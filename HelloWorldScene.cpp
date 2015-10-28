#include "HelloWorldScene.h"

USING_NS_CC;

Scene* HelloWorld::createScene()
{
    // 'scene' is an autorelease object
    auto scene = Scene::create();
    
    // 'layer' is an autorelease object
    auto layer = HelloWorld::create();

    // add layer as a child to scene
    scene->addChild(layer);

    // return the scene
    return scene;
}

// on "init" you need to initialize your instance
bool HelloWorld::init()
{
    //////////////////////////////
    // 1. super init first
    if ( !Layer::init() )
    {
        return false;
    }
    
    Size visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();

  
    auto closeItem = MenuItemImage::create(
                                           "CloseNormal.png",
                                           "CloseSelected.png",
                                           CC_CALLBACK_1(HelloWorld::menuCloseCallback, this));
	closeItem->setPosition(Vec2(origin.x + visibleSize.width - closeItem->getContentSize().width/2 ,
                                origin.y + closeItem->getContentSize().height/2));

    // create menu, it's an autorelease object
    auto menu = Menu::create(closeItem, NULL);
    menu->setPosition(Vec2::ZERO);
    this->addChild(menu, 1);
    
    sp=Sprite::create("HelloWorld.png");
    sp->setScale(1);
    sp->setPosition(500,500);
    this->addChild(sp);
    
    
//    auto label=Label::createWithTTF("Hello","fonts/Marker Felt.ttf", 80);
//    label->setPosition(Vec2(200,300));
//    this->addChild(label);
//    label->enableShadow(Color4B::GREEN,Size(20,10));//阴影
//    label->enableOutline(Color4B::BLUE,6);//轮廓
    
//    
//    for (int i=0; i<50; i++) {
//        sp=Sprite::create("HelloWorld.png");
//        sp->setPosition(Vec2(arc4random()%760+100,arc4random()%300+100));
//        this->addChild(sp);
//    }
//
    //贴图缓存
//    TextureCache *cache=Director::getInstance()->getTextureCache();
    //文理
//    Texture2D *texture=cache->addImage("HelloWorld.png");
//    auto sp2=Sprite::createWithTexture(texture);
//    sp2->setPosition(Vec2(700,300));
//    sp2->setScale(2, 2);
//    this->addChild(sp2);
//    
  
   
    return true;
}


void HelloWorld::menuCloseCallback(Ref* pSender)
{
//    auto move=MoveTo::create(3, Vec2(500, 500));
//    sp->runAction(move);
    
//    auto rotate=RotateBy::create(1, 1000);
//    sp->runAction(rotate);
//    static float xcoor = 200;
//    xcoor += 100;
//    //旋转
//    auto by=RotateBy::create(5, 1000);
//    sp->runAction(by);
//    //同一个动作只能被一个对象执行，除非拷贝（克隆）
   // auto sp=Sprite::create("HelloWorld.png");
//    sp->setScale(0.3, 0.3);
//    sp->setPosition(xcoor,200);
//    this->addChild(sp);
//    sp->runAction(by->clone());
    
   // auto scale=ScaleBy::create(0.6, 2);
    //sp->runAction(scale);
    //contetSize与缩放比例无关
   // Size size=sp->getContentSize();
   // log("width=%f,height=%f",size.width,size.height);
    
    //BoundingBox获取精灵实际的origin和size
   // Rect rect=sp->getBoundingBox();
  //  log("x=%f,y=%f,width=%f,height=%f",rect.origin.x,rect.origin.y, rect.size.width,rect.size.height);
    //时间 位置 高度 次数
   // auto jump=JumpTo::create(5, Vec2(400,400), 100, 5);
   // sp->runAction(jump);
    
    //auto blink =Blink::create(5, 10);
    //序列动作  DelayTime::create(5)延时5秒后执行
   // auto seq=Sequence::create(jump,DelayTime::create(5),blink, nullptr);
   // sp->runAction(seq);
    //同步合成动作
   // auto spawn=Spawn::create(jump, blink,NULL);
    
   // auto rotate=RotateBy::create(3, 700);
    //重复动作
    //auto repeat=RepeatForever::create(rotate);
   // auto repeat=Repeat::create(rotate, 2);
    
    //sp->runAction(repeat);
    //贝塞尔曲线 根据两个控制点来控制路线
//    ccBezierConfig config;
//    config.controlPoint_1=Vec2(600,200);
//    config.controlPoint_2=Vec2(600,200);
//    config.endPosition=Vec2(900,700);
//    BezierTo* bezier=BezierTo::create(3, config);
//    sp->runAction(bezier);
    //样条曲线动作
//    auto pointArray=PointArray::create(20);
//    pointArray->addControlPoint(Point(0,0));
//    pointArray->addControlPoint(Point(210,0));
//    pointArray->addControlPoint(Point(210,240));
//    pointArray->addControlPoint(Point(0,240));
//    pointArray->addControlPoint(Point(0,0));
//    auto cardinalSplineTo=CardinalSplineBy::create(3, pointArray, 4);
//    sp->runAction(cardinalSplineTo);
    //缓冲动作
//    auto ease=EaseOut::create(MoveTo::create(3, Vec2(800,200)),5);
//    sp->runAction(ease);
//   auto jump=EaseElasticInOut::create(MoveTo::create(3, Vec2(800,300)));
//   // sp->runAction(jump);
//    auto target=TargetedAction::create(sp, jump);
  // this->runAction(target);
////    进度条专属
//    auto progressTo=ProgressTo::create(2, 100);
//    auto timer=ProgressTimer::create(Sprite::create("HelloWorld.png"));
//    timer->setType(ProgressTimer::Type::BAR);
//    timer->setPosition(Point(400,240));
//    timer->setMidpoint(Point(0,0));
//    this->addChild(timer);
//    timer->runAction(progressTo);
   // int a=5,b=6,c=7;
  //  auto move=MoveTo::create(3, Vec2(500,500));
    //auto call=CallFunc::create(CC_CALLBACK_0(HelloWorld::callfunc, this,a,b,c));
//    auto call=CallFuncN::create(CC_CALLBACK_1(HelloWorld::callFuncN,this));
//    auto seq=Sequence::create(move,call, nullptr);
//    sp->runAction(seq);
    //speed速度
    
//    auto move=MoveTo::create(3, Vec2(500,500));
//    auto speed =Speed::create(move, 20);
//    sp->runAction(speed);
    //follow
  //设置一个层跟随一个精灵

    auto fl=Follow::create(sp);
    this->runAction(fl);
    //auto mo=MoveBy::create(2, Vec2(100,100));
   // sp->runAction(mo);
  
    
 //   Director::getInstance()->getActionManager()->pauseTarget(sp);//暂停sp的动作
 //   Director::getInstance()->getActionManager()->resumeTarget(sp);//恢复sp的动作
  //  Director::getInstance()->pause();//整个游戏的暂停
  //  Director::getInstance()->resume();//恢复
  //  Director::getInstance()->end();//退出游戏

  
    
    
}
void HelloWorld::callfunc(int a,int b,int c){
    log("callfunc is called");
    log("%d,%d,%d",a,b,c);

}
void HelloWorld:: callFuncN(Node* sender){
    log("cN is called");
    sender->removeFromParent();

}
//cocos2dx 是单线程的 单你要执行两个动作是要开辟一个线程
void HelloWorld:: testArray(){
    auto str1=__String::create("String1");
    auto str2=__String::create("String2");
    auto str3=__String::create("String3");
    auto str4=__String::create("String4");
    auto str5=__String::create("String5");
    __Array* array=__Array::create();
    
    auto temp=__Array::create();
    array->addObject(str1);
    array->addObject(str2);
    array->addObject(str3);
    array->addObject(str4);
    array->addObject(str5);
    
    for (int i=0; i<array->count(); i++) {
        //删除一个对象时不能再对数组进行遍历因为删除一个对象时，下一个对象会自动填充前一个位置 而i++会向后走，就会遍历不到往前移动的哪一个对象。解决办法  ，在外面定义一个临时数组 当你要删除哪个是把 那个放入临时数组 最后遍历临时数组进行删除。
        auto str=(__String*)array->objectAtIndex(i);
        log("str::%s",str->getCString());
        if (i==2) {
            temp->addObject(array->getObjectAtIndex(i));
        }
    }
    for (int i=0; i<temp->count(); i++) {
        auto str=(__String*)temp->objectAtIndex(i);
        log("str::%s",str->getCString());
        array->removeObject(temp->objectAtIndex(i));
        
    }
}

void HelloWorld:: testDic(){
    //打印字符串
    std::string a="ddddd";
    log("a=%s",a.c_str());
    char b[10];
    log("%lu",sizeof(b));
    //拼接
    int i=20;
    sprintf(b, "%d.png",i);
    printf("%s",b);
    
    auto pDic=__Dictionary::create();
    auto pValue1=__String::create("100");
    auto pValue2=__String::create("120");
    auto pValue3=__Integer::create(200);
    pDic->setObject(pValue1, "key1");
    pDic->setObject(pValue2, "key2");
    pDic->setObject(pValue3, "key3");
    auto pStr1=(__String *)pDic->objectForKey("key1");
    log("{key1:%s}",pStr1->getCString());
    auto pInteger=(__Integer*)pDic->objectForKey("key3");
    log("{key3:%d}",pInteger->getValue());
    auto name=__String::create("zhangsan");
    auto pass=__String::create("password");
    auto dic=__Dictionary::create();
    dic->setObject(name, "NAME");
    dic->setObject(pass, "PWD");
    
}

void HelloWorld::testAnimation(){
    //创建精灵框架缓存
      auto sc=SpriteFrameCache::getInstance();
    //向缓存里面放入精灵文件
     sc->addSpriteFramesWithFile("luoli.plist", "luoli.png");
    //创建一个容器
    Vector<SpriteFrame*>vec;
    for (int i=1; i<=8; i++) {
        //获得每张图片的名称
         char str[10];
         sprintf(str,"s_%d.png",i);
        log("%s",str);
       // std::string str=StringUtils::format("s_%d.png",i);
        //使用精灵帧缓存将大图中的小图读取到缓存中
        auto frame=sc->getSpriteFrameByName(str);
        //把缓存加入到容器里
        vec.pushBack(frame);
    }
    //将多张动画帧做成动画
    auto animation=Animation::createWithSpriteFrames(vec,0.10);
    //将动画转成动作
    auto animate=Animate::create(animation);
    //创建一个精灵利用精灵真来创建
    auto lu=Sprite::createWithSpriteFrameName("s_1.png");
    //auto lu=Sprite::create ("s_1.png");
    
    
    
    lu->setPosition(Vec2(0,0));
    this->addChild(lu);
    //让精灵执行这个动作
    lu->runAction(RepeatForever::create(animate));

 //  auto mo=MoveTo::create(5, Vec2(1000,150));
    ccBezierConfig config;
    config.controlPoint_1=Vec2(0, 0);
    Size s=Director::getInstance()->getVisibleSize();
    config.controlPoint_2=Vec2(s.width/2, s.height*2);
    config.endPosition=Vec2(s.width,0);
    BezierTo *bzierto=BezierTo::create(5, config);
    lu->runAction(bzierto);
    
   // DrawPrimitives::drawQuadBezier(Vec2(0, 0), Vec2(s.width/2, s.height/2), Vec2(s.width,0), 50);
   //auto spawn=Spawn::create(mo,animate, NULL);
    
  //lu->runAction(mo);
    
    
    
    
    
//    auto sc=SpriteFrameCache::getInstance();
//    sc->addSpriteFramesWithFile("luoli.plist", "luoli.png");
//    Vector<SpriteFrame*>vec;
//    for (int i=1; i<=8; i++) {
//        float delay[8]={1,1,1,1,1,1,1,1};
//        std::string str=StringUtils::format("s_%d.png",i);
//        auto sprframe=sc->getSpriteFrameByName(str);
//        auto aniframe=AnimationFrame::create(sprframe, delay[i-1], ValueMap());
//        vec.pushBack(aniframe);
//    }
//    auto animation=Animation::create(vec,1.0f,0.10);
//    auto animate=Animate::create(animation);
//    this->runAction(animate);
    
    
}

void HelloWorld::draw(cocos2d::Renderer* renderer, const cocos2d::Mat4 &transform, uint32_t flags){
     _customCommand.init(_globalZOrder);
     _customCommand.func=CC_CALLBACK_0(HelloWorld::onDraw, this,transform,flags);
     renderer->addCommand(&_customCommand);
}
void HelloWorld:: onDraw( const cocos2d::Mat4 &transform, uint32_t flags){
    Size s=Director::getInstance()->getVisibleSize();
    Director*director=Director::getInstance();
    director->pushMatrix(MATRIX_STACK_TYPE::MATRIX_STACK_MODELVIEW);
    director->loadMatrix(MATRIX_STACK_TYPE::MATRIX_STACK_MODELVIEW, transform);
    //画线
//    CHECK_GL_ERROR_DEBUG();
//    glLineWidth(0.5f);
//    DrawPrimitives::setDrawColor4B(255, 0, 0, 255);
//    DrawPrimitives::drawLine(Vec2(s.width,0),Vec2(0,s.height));
    //画点
    CHECK_GL_ERROR_DEBUG();
//    DrawPrimitives::setPointSize(64); //设置点的大小
//    DrawPrimitives::setDrawColor4B(0, 255, 255, 255); //设置颜色
//    DrawPrimitives::drawPoint(Vec2(300,300));//参数vect2对象 表示圆心的位置
//    //画多个点
//    
//    CHECK_GL_ERROR_DEBUG();
//    Vec2 points[] ={Vec2(60,160),Vec2(70,170),Vec2(60,170),Vec2(70,160)};
//    DrawPrimitives::setPointSize(4);
//    DrawPrimitives::setDrawColor4B(0, 255, 255, 255);
//    DrawPrimitives::drawPoints(points, 4); //参数依次为圆心Vect2和点的个数
//    //画圆圈
//    CHECK_GL_ERROR_DEBUG();
//    glLineWidth(16);
//    DrawPrimitives::setDrawColor4B(0, 255, 0, 255);
//    DrawPrimitives::drawCircle(Vec2(300,300), 50, 100, 5, true);//参数依次为圆心半径 角度 段数 是否画出一条半径
    //画圆圈
   // CHECK_GL_ERROR_DEBUG();
//    glLineWidth(2);
//    DrawPrimitives::setDrawColor4B(0, 255, 255, 255);
//    DrawPrimitives::drawCircle(Vec2(200,200), 50, CC_DEGREES_TO_RADIANS(45), 50, true);
    
//    //画多边圆形，不闭合
    CHECK_GL_ERROR_DEBUG();
    glLineWidth(10);
    Vec2 vertices[]={Vec2(0,0),Vec2(50,50),Vec2(100,50),Vec2(100,100),Vec2(50,100)};
    DrawPrimitives::drawPoly(vertices, 5, false);//参数依次为多边形顶点，定点数，是否闭合，
//
//    //绘制填充多边形。
//    CHECK_GL_ERROR_DEBUG();
//    glLineWidth(1);
//    Vec2 filedVertices[]={Vec2(0,120),Vec2(50,120),Vec2(50,170),Vec2(25,200),Vec2(0,170)};
//    DrawPrimitives::drawSolidPoly(filedVertices, 5, Color4F(0.5f,0.5f,1,1));//参数依次为定点，顶点个数，填充颜色。
//    //绘制多边形，闭合
//   // DrawPrimitives::setDrawColor4B(255, 0, 255, 255);
//    
//    //绘制贝塞尔曲线
//    DrawPrimitives::drawQuadBezier(Vec2(0, 0), Vec2(s.width/2, s.height/2), Vec2(s.width,0), 50);
//    director->popMatrix(MATRIX_STACK_TYPE::MATRIX_STACK_MODELVIEW);
}


