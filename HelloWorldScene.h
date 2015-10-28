#ifndef __HELLOWORLD_SCENE_H__
#define __HELLOWORLD_SCENE_H__

#include "cocos2d.h"

class HelloWorld : public cocos2d::Layer
{
public:
    cocos2d::Sprite *sp;
    // there's no 'id' in cpp, so we recommend returning the class instance pointer
    static cocos2d::Scene* createScene();

    // Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
    virtual bool init();
    
    // a selector callback
    void menuCloseCallback(cocos2d::Ref* pSender);
    
   
    CREATE_FUNC(HelloWorld);
    
     void callfunc(int a,int b,int c);
     void callFuncN(Node* sender);
    void testArray();
    void testDic();
    void testAnimation();
    virtual void draw(cocos2d::Renderer* renderer, const cocos2d::Mat4 &transform, uint32_t flags);
 

protected:
    void onDraw( const cocos2d::Mat4 &transform, uint32_t flags);
    cocos2d::CustomCommand _customCommand;


    
};

#endif // __HELLOWORLD_SCENE_H__
