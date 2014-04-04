//
//  EziFacebookFriend.h
//  FacebookGameDemo
//
//  Created by Paras Mendiratta on 20/05/13.
//
//

#ifndef __FacebookGameDemo__EziFacebookFriend__
#define __FacebookGameDemo__EziFacebookFriend__

#include <iostream>
#include "cocos2d.h"


class EziFacebookFriend : public cocos2d::Ref
{
public:
    
    static EziFacebookFriend* create(const std::string& fbID, const std::string& name = "", long score = 0, const std::string& photoPath = "", bool installed = false);

    ~EziFacebookFriend();
    
    const std::string& getName() const;
    const std::string& getFBID() const;
    long getScore() const;
    bool isInstalled() const;
    const std::string& getPhotoPath() const;
    
    void saveData(const std::string& data, const std::string& key);
    
    EziFacebookFriend *clone() const;
    
private:
    
    friend class EziFBIncomingRequest;
    
    std::string _name;
    std::string _fbID;
    std::string _photoPath;
    
    bool _installed;
    long _score;
    
    
    EziFacebookFriend();

};

#endif /* defined(__FacebookGameDemo__EziFacebookFriend__) */
