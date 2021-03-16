#ifndef THREATOBJECT_H_INCLUDED
#define THREATOBJECT_H_INCLUDED

#include<iostream>
#include "CommonFunc.h"
#include "BaseObject.h"
#include "BulletObject.h"
#include <vector>
class ThreatObject:public BaseObject
{
public:
    ThreatObject();
    ~ThreatObject();

    void set_x_pos_(const float &xPos) {x_pos_=xPos;}
    void set_y_pos_(const float &yPos) {y_pos_=yPos;}

    int get_y_pos_() const {return y_pos_;}

    void set_x_val_(const float &xVal) {x_val_=xVal;}
    void set_y_val_(const float &yVal) {y_val_=yVal;}

    bool LoadImg(std::string path, SDL_Renderer* screen);
    void Show(SDL_Renderer* des);
    void set_clip();
    void MoveThreat();

    std::vector<BulletObject*> get_bullet_list1() const {return p_bullet_list1_;}
    std::vector<BulletObject*> get_bullet_list2() const {return p_bullet_list2_;}

    void InitBullet(BulletObject*p_bullet1, SDL_Renderer* screen);
    void MakeBullet(SDL_Renderer* screen,const int &x_border, const int &y_border);
private:
    float x_pos_;
    float y_pos_;

    float x_val_;
    float y_val_;

    int width_frame_;
    int height_frame_;

    SDL_Rect frame_clip_[1];
    int frame_;
    std::vector<BulletObject*> p_bullet_list1_;
    std::vector<BulletObject*> p_bullet_list2_;
};

#endif // THREATOBJECT_H_INCLUDED
