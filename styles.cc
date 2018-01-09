@import url(http://fonts.googleapis.com/css?family=Raleway:400,200);
#cssmenu,
#cssmenu ul,
#cssmenu ul li,
#cssmenu ul li a {
  margin: 0;
  padding: 0;
  border: 0;
  list-style: none;
  line-height: 1;
  display: block;
  position: relative;
  -webkit-box-sizing: border-box;
  -moz-box-sizing: border-box;
  box-sizing: border-box;
}
a {
    color: hotpink;
}
#cssmenu {
  width: 220px;
  font-family: Raleway, sans-serif;
  color: #ffffff;
}
#cssmenu ul ul {
  display: none;
}
#cssmenu > ul > li.active > ul {
  display: block;
}
.align-right {
  float: right;
}
#cssmenu > ul > li > a {
  padding: 16px 22px;
  cursor: pointer;
  z-index: 2;
  font-size: 16px;
  text-decoration: none;
  color: #ffffff;
  background: #3ab4a6   ;
  -webkit-transition: color .2s ease;
  -o-transition: color .2s ease;
  transition: color .2s ease;
}
#cssmenu > ul > li > a:hover {
  color: #d8f3f0;
}
#cssmenu ul > li.has-sub > a:after {
  position: absolute;
  right: 26px;
  top: 19px;
  z-index: 5;
  display: block;
  height: 10px;
  width: 2px;
  background: #ffffff;
  content: "";
  -webkit-transition: all 0.1s ease-out;
  -moz-transition: all 0.1s ease-out;
  -ms-transition: all 0.1s ease-out;
  -o-transition: all 0.1s ease-out;
  transition: all 0.1s ease-out;
}
#cssmenu ul > li.has-sub > a:before {
  position: absolute;
  right: 22px;
  top: 23px;
  display: block;
  width: 10px;
  height: 2px;
  background: #ffffff;
  content: "";
  -webkit-transition: all 0.1s ease-out;
  -moz-transition: all 0.1s ease-out;
  -ms-transition: all 0.1s ease-out;
  -o-transition: all 0.1s ease-out;
  transition: all 0.1s ease-out;
}
#cssmenu ul > li.has-sub.open > a:after,
#cssmenu ul > li.has-sub.open > a:before {
  -webkit-transform: rotate(45deg);
  -moz-transform: rotate(45deg);
  -ms-transform: rotate(45deg);
  -o-transform: rotate(45deg);
  transform: rotate(45deg);
}
#cssmenu ul ul li a {
  padding: 14px 22px;
  cursor: pointer;
  z-index: 2;
  font-size: 14px;
  text-decoration: none;
  color: #dddddd;
  background: #49505a;
  -webkit-transition: color .2s ease;
  -o-transition: color .2s ease;
  transition: color .2s ease;
}
#cssmenu ul ul ul li a {
  padding-left: 32px;
}
#cssmenu ul ul li a:hover {
  color: #ffffff;
}
#cssmenu ul ul > li.has-sub > a:after {
  top: 16px;
  right: 26px;
  background: #dddddd;
}
#cssmenu ul ul > li.has-sub > a:before {
  top: 20px;
  background: #dddddd;
}
.contect {
   background-color: white;
 
   position: absolute;
   margin-right: 50px;
   margin-left: 250px;
   padding: 12px;
   height: auto;
   border: solid;
   border-width: 2px;
   text-decoration: none;
   font-size: 150%;
 
 
}
 
img {
    max-width: 100%;
    height: auto;
}
.color{
  color:#800000;
}
 
.container-fluid{
  position: absolute;
  right: 0;
  left: 0;
  margin-top: 10px;
 
}
