////// AUTOGENERATED:BEGIN //////
////// DO     NOT     EDIT //////

USING_NS_CC;

bool CreatorLabels_init()
{
    auto director = Director::getInstance();
    auto glview = director->getOpenGLView();
    glview->setDesignResolutionSize(960, 640, ResolutionPolicy::FIXED_HEIGHT);
    auto sf_grossini_dance_08 = SpriteFrame::create("creator_assets/grossini_dance_08.png", Rect(17, 7, 51, 109), false, Vec2(0, -1), Size(85, 121));
    SpriteFrameCache::getInstance()->addSpriteFrame(sf_grossini_dance_08, "grossini_dance_08");
    auto sf_arial16 = SpriteFrame::create("creator_assets/arial16.png", Rect(0, 0, 510, 61), false, Vec2(-1, 225.5), Size(512, 512));
    SpriteFrameCache::getInstance()->addSpriteFrame(sf_arial16, "arial16");
    auto sf_iso_test = SpriteFrame::create("creator_assets/iso-test.png", Rect(2, 1, 319, 116), false, Vec2(-94.5, 69), Size(512, 256));
    SpriteFrameCache::getInstance()->addSpriteFrame(sf_iso_test, "iso_test");

    return true;
}
Node* CreatorLabels_create()
{
    // New node
    auto scene_0_0 = Scene::create();
    scene_0_0->setAnchorPoint(Vec2(0, 0));
    scene_0_0->setColor(Color3B(255, 255, 255));
    scene_0_0->setLocalZOrder(0);
    scene_0_0->setGlobalZOrder(0);
    scene_0_0->setOpacity(255);
    scene_0_0->setOpacityModifyRGB(false);
    scene_0_0->setCascadeOpacityEnabled(true);
    scene_0_0->setTag(-1);
    // New node
    auto label_1_1 = Label::createWithSystemFont("System Font Label: 32", "arial", 32);
    label_1_1->setAnchorPoint(Vec2(0.5, 0.5));
    label_1_1->setScaleY(1);
    label_1_1->setScaleX(1);
    label_1_1->setColor(Color3B(0, 255, 0));
    label_1_1->setName("Label");
    label_1_1->setVerticalAlignment(TextVAlignment::CENTER);
    label_1_1->setLocalZOrder(0);
    label_1_1->setGlobalZOrder(0);
    label_1_1->setOpacity(255);
    label_1_1->setOpacityModifyRGB(false);
    label_1_1->setCascadeOpacityEnabled(true);
    label_1_1->setHorizontalAlignment(TextHAlignment::CENTER);
    label_1_1->setTag(-1);
    label_1_1->setPosition(Vec2(186, 117));
    label_1_1->setSkewY(0);
    label_1_1->setRotationSkewY(0);
    label_1_1->setSkewX(0);
    label_1_1->setRotationSkewX(0);
    scene_0_0->addChild(label_1_1);
    // New node
    auto label_1_2 = Label::createWithBMFont("creator_assets/arial16.fnt", "BMFont: Arial 16");
    label_1_2->setAnchorPoint(Vec2(1, 1));
    label_1_2->setScaleY(1);
    label_1_2->setScaleX(1);
    label_1_2->setColor(Color3B(71, 0, 255));
    label_1_2->setName("arial16");
    label_1_2->setVerticalAlignment(TextVAlignment::TOP);
    label_1_2->setLocalZOrder(0);
    label_1_2->setBMFontSize(40);
    label_1_2->setGlobalZOrder(0);
    label_1_2->setOpacity(255);
    label_1_2->setOpacityModifyRGB(false);
    label_1_2->setCascadeOpacityEnabled(true);
    label_1_2->setHorizontalAlignment(TextHAlignment::LEFT);
    label_1_2->setLineHeight(19);
    label_1_2->setTag(-1);
    label_1_2->setPosition(Vec2(300, 71));
    label_1_2->setSkewY(0);
    label_1_2->setRotationSkewY(0);
    label_1_2->setSkewX(0);
    label_1_2->setRotationSkewX(0);
    scene_0_0->addChild(label_1_2);
    // New node
    auto label_1_3 = Label::createWithTTF("TTF Font: A Damn Mess: 64", "creator_assets/A Damn Mess.ttf", 64);
    label_1_3->setAnchorPoint(Vec2(0, 0));
    label_1_3->setScaleY(1);
    label_1_3->setScaleX(1);
    label_1_3->setColor(Color3B(255, 0, 0));
    label_1_3->setName("A Damn Mess");
    label_1_3->setVerticalAlignment(TextVAlignment::TOP);
    label_1_3->setLocalZOrder(0);
    label_1_3->setGlobalZOrder(0);
    label_1_3->setOpacity(255);
    label_1_3->setOpacityModifyRGB(false);
    label_1_3->setCascadeOpacityEnabled(true);
    label_1_3->setHorizontalAlignment(TextHAlignment::LEFT);
    label_1_3->setLineHeight(64);
    label_1_3->setTag(-1);
    label_1_3->setPosition(Vec2(21, 181));
    label_1_3->setSkewY(0);
    label_1_3->setRotationSkewY(0);
    label_1_3->setSkewX(0);
    label_1_3->setRotationSkewX(0);
    scene_0_0->addChild(label_1_3);
    // New node
    auto label_1_4 = Label::createWithTTF("This is a\nmultiline\nTTF label: Left", "creator_assets/American Typewriter.ttf", 32);
    label_1_4->setAnchorPoint(Vec2(0.5, 0.5));
    label_1_4->setScaleY(1);
    label_1_4->setScaleX(1);
    label_1_4->setColor(Color3B(255, 133, 0));
    label_1_4->setName("A Damn Mess");
    label_1_4->setVerticalAlignment(TextVAlignment::CENTER);
    label_1_4->setLocalZOrder(0);
    label_1_4->setGlobalZOrder(0);
    label_1_4->setOpacity(255);
    label_1_4->setOpacityModifyRGB(false);
    label_1_4->setCascadeOpacityEnabled(true);
    label_1_4->setHorizontalAlignment(TextHAlignment::LEFT);
    label_1_4->setLineHeight(48);
    label_1_4->setTag(-1);
    label_1_4->setPosition(Vec2(472, 84));
    label_1_4->setSkewY(0);
    label_1_4->setRotationSkewY(0);
    label_1_4->setSkewX(0);
    label_1_4->setRotationSkewX(0);
    scene_0_0->addChild(label_1_4);
    // New node
    auto label_1_5 = Label::createWithTTF("This is a\nmultiline\nTTF label:  Right", "creator_assets/American Typewriter.ttf", 32);
    label_1_5->setAnchorPoint(Vec2(0.5, 0.5));
    label_1_5->setScaleY(1);
    label_1_5->setScaleX(1);
    label_1_5->setColor(Color3B(255, 224, 0));
    label_1_5->setName("A Damn Mess");
    label_1_5->setVerticalAlignment(TextVAlignment::CENTER);
    label_1_5->setLocalZOrder(0);
    label_1_5->setGlobalZOrder(0);
    label_1_5->setOpacity(255);
    label_1_5->setOpacityModifyRGB(false);
    label_1_5->setCascadeOpacityEnabled(true);
    label_1_5->setHorizontalAlignment(TextHAlignment::RIGHT);
    label_1_5->setLineHeight(64);
    label_1_5->setTag(-1);
    label_1_5->setPosition(Vec2(730, 102));
    label_1_5->setSkewY(0);
    label_1_5->setRotationSkewY(0);
    label_1_5->setSkewX(0);
    label_1_5->setRotationSkewX(0);
    scene_0_0->addChild(label_1_5);
    return scene_0_0;
}
////// AUTOGENERATED:END//////
