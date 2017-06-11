
<?php
if ( ! defined('BASEPATH')) exit('No direct script access allowed');

class Menu {


public function getMenu($key='')
{

  $menu = array(
    'dashboard'=>array(
     "title" => 'ภาพรวม',
     "icon" => 'zmdi zmdi-view-dashboard',
     "url" => 'dashboard',
     "submenu" => ''
 ),

     'menuall' =>array(
      "title" => 'จัดการสินค้า',
      "icon" => 'fa fa-cubes',
      "url" => '',
      "submenu" => '1'
      ),

      'Systemsettings' =>array(
       "title" => 'ตั้งค่าระบบ',
       "icon" => 'fa fa-cubes',
       "url" => '',
       "submenu" => '1'
       ),
       'market' =>array(
        "title" => 'การตลาด',
        "icon" => 'fa fa-bar-chart-o',
        "url" => '',
        "submenu" => '1'
    ),

       'Pro' =>array(
        "title" => 'สินค้า',
        "icon" => 'fa fa-cubes',
        "url" => '',
        "submenu" => '1'
        ),


    'reportpage' =>array(
     "title" => 'รายงาน',
     "icon" => 'fa fa-bar-chart-o',
     "url" => 'reportpage',
     "submenu" => ''
 ),


 'member' =>array(
 "title" => 'ลูกค้า',
 "icon" => 'fa fa-user-plus',
 "url" => 'member',
 "submenu" => ''
),
    'users' =>array(
    "title" => 'เพิ่มผู้ใช้งานระบบ',
    "icon" => 'fa fa-user-plus',
    "url" => 'users',
    "submenu" => ''
  ),
    'usergroup' =>array(
    "title" => 'เพิ่มกลุ่มผู้ใช้งาน',
    "icon" => 'fa fa-users',
    "url" => 'usergroup',
    "submenu" => ''
  ),

);

return $menu[$key];

}

public function getMenuSub($key='',$keysub='')
{

  $menu = array(

    "menuall" => array(
        'mesall'=>array(
            "title" => 'รายการเมนู',
            "url" => 'mesall',
        ),

        'contentme'=>array(
            "title" => 'เมนูหน้าเนื้อหา',
            "url" => 'contentme',
        ),

    ),
    "Systemsettings" => array(
        'company'=>array(
            "title" => 'ตั้งค่าเบื้องต้น',
            "url" => 'company',
        ),

        'settingsend'=>array(
            "title" => 'ตั้งค่าการจัดส่ง',
            "url" => 'settingsend',
        ),

    ),
  "market" => array(
      'allcoupon'=>array(
          "title" => 'รายการคูปอง',
          "url" => 'allcoupon',
      ),

      'promotion'=>array(
          "title" => 'โปรโมชั่น',
          "url" => 'promotion',
      ),

  ),
  "Pro" => array(
      'products'=>array(
          "title" => 'รายการสินค้า',
          "url" => 'products',
      ),

      'listcategory'=>array(
          "title" => 'โปรโมชั่น',
          "url" => 'listcategory',
      ),

  ),



);

return $menu[$key][$keysub];

}


public function getMenuAll()
{
  $menu = array(
    'dashboard'=>array(
     "title" => 'ภาพรวม',
     "icon" => 'zmdi zmdi-view-dashboard',
     "url" => 'dashboard',
 ),

'menuall' =>array(
 "title" => 'จัดการเมนู',
 "icon" => 'fa fa-bars',
 "url" => '',
 "submenu" => array(
     'mesall'=>array(
         "title" => 'รายการเมนู',
         "url" => 'mesall',
     ),
     'contentme'=>array(
         "title" => 'เมนูหน้าเนื้อหา',
         "url" => 'contentme',
     ),
 ),
),
'Systemsettings' =>array(
 "title" => 'ตั้งค่าระบบ',
 "icon" => 'fa fa-cogs',
 "url" => '',
 "submenu" => array(
     'company'=>array(
         "title" => 'ตั้งค่าเบื้องต้น',
         "url" => 'company',
     ),
     'shippingsist'=>array(
         "title" => 'ตั้งค่าการจัดส่ง',
         "url" => 'shippingsist',
     ),
 ),
),

'market' =>array(
 "title" => 'การตลาด',
 "icon" => 'fa fa-bar-chart-o',
 "url" => '',
 "submenu" => array(
     'allcoupon'=>array(
         "title" => 'รายการคูปอง',
         "url" => 'allcoupon',
     ),

     'promotion'=>array(
         "title" => 'โปรโมชั่น',
         "url" => 'promotion',
     ),

 ),
),


'Pro' =>array(
 "title" => 'สินค้า',
 "icon" => 'fa fa-cubes',
 "url" => '',
 "submenu" => array(
     'Products'=>array(
         "title" => 'รายการสินค้า',
         "url" => 'products',
     ),

     'listcategory'=>array(
         "title" => 'จัดการหมวดหมู่',
         "url" => 'listcategory',
     ),
     'WithholdingTax'=>array(
         "title" => 'ตั้งค่าสินค้า',
         "url" => 'WithholdingTax',
     ),
 ),
),
    'reportpage' =>array(
     "title" => 'รายงาน',
     "icon" => 'fa fa-calendar-minus-o',
     "url" => 'reportpage',
     ),

      'member' =>array(
      "title" => 'ลูกค้า',
      "icon" => 'fa fa-user',
      "url" => 'member',
  ),

        'users' =>array(
        "title" => 'เพิ่มผู้ใช้งานระบบ',
        "icon" => 'fa fa-user-plus',
        "url" => 'users',
  ),
          'usergroup' =>array(
          "title" => 'เพิ่มกลุ่มผู้ใช้งาน',
          "icon" => 'fa fa-users',
          "url" => 'usergroup',
  ),
);
  return $menu;
  }

}
 ?>
