const char MAIN_page[] = R"=====(<!DOCTYPE html>
<html>
 <head>
    <title>LED DART</title>
    <script src="http://code.jquery.com/jquery-latest.min.js"></script>
    <script src="http://code.jquery.com/ui/1.12.1/jquery-ui.js"></script>
    
    <style>
      div {
        display : inline-block;
      }
      .menu {
        border : 1px solid black;
        width : 90px;
        height : 90px;
        font-family:verdana;
        font-size:40pt;
        font-weight:bold;
        text-align : center;
        cursor : pointer;
      }
      .dartback {
        position : absolute;
        top : 300px;
        left : 50px;
        width: 600px;
        height: 600px;
        background : white;
        -webkit-transition:background-color 1s, -webkit-transform 1s;
        transition:background-color 1.5s, transform 1s;
      }
      .button {
        z-index : 100;
        position : absolute;
          width: 200px;
          height: 200px;
        cursor : pointer;
      }     
      .button > img {
        top : 10px;
        position :absolute;
      }
      .drt {
        display : none;
        z-index : 1;
        position : absolute;
        width : 90px;
        height : 75px;
        cursor : pointer;
        border : 2px solid black;
        border-radius : 25%;
        top : 0;
        left : 2.9px;
        -webkit-transition:background-color 1s, -webkit-transform 1s;
        transition:background-color 1s, transform 1s;
        cursor : pointer;
      }
      #red {
        color: red;
          top: 110px;
          left: 1250px;
      }
      #green {
        color : green;
        top : 300px;
        left : 1450px;
      }
      #blue {
        color : blue;
        top : 300px;
        left : 1050px;
      }
      #off {
        color : black;
        top : 500px;
        left : 1250px;
      }
      .dartr {
        z-index : -1;
        position : absolute;
        top : 380px;
        left : 480px;
        cursor : pointer;
        font-family:verdana;
        font-size:60pt;
        font-weight:bold;
        color : #FF90A6;
      }
      .dartg {
        z-index : -1;
        position : absolute;
        top : 380px;
        left : 480px;
        cursor : pointer;
        font-family:verdana;
        font-size:60pt;
        font-weight:bold;
        color : #FF90A6;
      }
      .dartb {
        z-index : -1;
        position : absolute;
        top : 380px;
        left : 480px;
        cursor : pointer;
        font-family:verdana;
        font-size:60pt;
        font-weight:bold;
        color : #FF90A6;
      }
      .darto {
        z-index : -1;
        position : absolute;
        top : 380px;
        left : 480px;
        cursor : pointer;
        font-family:verdana;
        font-size:60pt;
        font-weight:bold;
        color : #FF90A6;
      }
      .obj1 > img{
          position: absolute;
          z-index: -2;
          width: 530px;
          height: 600px;
          top: 100px;
          left: 1100px;
      }.obj2 > img{
          position: absolute;
          z-index: -2;
          width: 530px;
          height: 600px;
          top: 100px;
          left: 1090px;
      }.obj3 > img{
          position: absolute;
          z-index: -2;
          width: 530px;
          height: 600px;
          top: 100px;
          left: 1080px;
      }
      .obj4 > img {
        position : absolute;
        z-index : 1;
        top: 10px;
        left: 1570px;
      }
      .obj5 > img {
        position : absolute;
        z-index : 1;
        top: 600px;
        left: 1570px;
      }
      .obj6 > img {
        position : absolute;
        z-index : 1;
        top: 10px;
        left: 15px;
      }
      #color {
        width: 350px;
        height: 150px;
        text-align: center;
        border: 3px solid black;
        position: relative;
        top: 10px;
        left: 650px;
        font-size: 70px;
      }
    </style>
  </head>
  <body>
    <div class="main">
      <div id='color'>LED</div>
      <div class="dartback"><img src="hand10.png" width="600px" height="600px"></div>
      <div class="dartr"><img src="pinr.png" width="167px" height="100px"></div>
      <div class="dartg"><img src="pin.png"width="167px" height="140px"></div>
      <div class="dartb"><img src="pin.png"width="167px" height="140px"></div>
      <div class="darto"><img src="pino.png"width="167px" height="100px"></div>
      <div class="button 123" id="red"><div class="drt" id="darr"></div></div>
      <div class="button 123" id="green"><div class="drt" id="drtg"></div></div>
      <div class="button 123" id="blue"><div class="drt" id="drtb"></div></div>
      <div class="button 123" id="off"><div class="drt" id="drto"></div></div>
      
      <div class="obj1"><img src="dart-board.png"></div>
      <div class="obj2"><img src="dart-board.png"></div>
      <div class="obj3"><img src="dart-board.png"></div>
      <div class="obj4"><img src="RGB3.png" width="340px" height="340px"></div>
      <div class="obj5"><img src="RGB.png" width="340px" height="340px"></div>
      <div class="obj6"><img src="RGB1.png" width="340px" height="340px"></div>
    </div> 
    <script>
      var r = 0;
      var g = 0;
      var b = 0;
      var o = 0;
      $('#red').click(function(){
        if(o==1){
          $('.darto').animate({top:1000,left:1180},200);
          setTimeout(function() {
            $('.darto').css('top','380px');
            $('.darto').css('left','480px');
          }, 220);
          o=0;
        }
        if(r==0){
          $('.dartr').animate({top:200,left:1180},250);
          r = 1;
        }
        else {
          $('.dartr').animate({top:1000,left:1180},200);
          setTimeout(function() {
            $('.dartr').css('top','380px');
            $('.dartr').css('left','480px');
          }, 220);
          r = 0;
        }
      });
      $('#green').click(function(){
        if(o==1){
          $('.darto').animate({top:1000,left:1180},200);
          setTimeout(function() {
            $('.darto').css('top','380px');
            $('.darto').css('left','480px');
          }, 220);
          o=0;
        }
        if(g==0){
          $('.dartg').animate({top:350,left:1360},250);
          g = 1;
        }
        else {
          $('.dartg').animate({top:1000,left:1360},200);
          setTimeout(function() {
            $('.dartg').css('top','380px');
            $('.dartg').css('left','480px');
          }, 220);
          g = 0;
        }
      });
      $('#blue').click(function(){
        if(o==1){
          $('.darto').animate({top:1000,left:1180},200);
          setTimeout(function() {
            $('.darto').css('top','380px');
            $('.darto').css('left','480px');
          }, 220);
          o=0;
        }
        if(b==0){
          $('.dartb').animate({top:350,left:1030},250);
          b = 1;
        }
        else {
          $('.dartb').animate({top:1000,left:1030},200);
          setTimeout(function() {
            $('.dartb').css('top','380px');
            $('.dartb').css('left','480px');
          }, 220);
          b = 0;
        }
      });
      $('#off').click(function(){
        $('.darto').animate({top:540,left:1180},200);
        setTimeout(function() {
          if(r==1) {
            $('.dartr').animate({top:1000,left:1180},200);
            setTimeout(function() {
              $('.dartr').css('top','380px');
              $('.dartr').css('left','480px');
            }, 220);
          }
          if(g==1) {
            $('.dartg').animate({top:1000,left:1360},200);
            setTimeout(function() {
              $('.dartg').css('top','380px');
              $('.dartg').css('left','480px');
            }, 220);
          }
          if(b==1) {
            $('.dartb').animate({top:1000,left:1030},200);
            setTimeout(function() {
              $('.dartb').css('top','380px');
              $('.dartb').css('left','480px');
            }, 220);
          }
          $('.dartback').css('background-color','darkgray');
          $(location).attr('href',"http://192.168.24.8:7040/black");
          $("#color").text("OFF");
          $("#color").css('background-color','darkgray');
          $("#color").css('color','white');
          r=0;g=0;b=0;o=1;
        }, 220);
      });
      $('.123').click(function(){
        
        setTimeout(function() {
          if(r==0&&g==0&&b==0) {
            $('.dartback').css('background-color','darkgray');
            $("#color").text("OFF");
            $("#color").css('background-color','black');
            $("#color").css('color','white');
            $(location).attr('href',"http://192.168.24.8:7040/black");
          }
        }, 50);
        if(r==1&&g==0&&b==0) {
          $('.dartback').css('background-color','red');
          $("#color").text("RED");
          $("#color").css('background-color','red');
          $("#color").css('color','black');
          $(location).attr('href',"http://192.168.24.8:7040/red");
        }
        if(r==0&&g==1&&b==0) {
          $('.dartback').css('background-color','green');
          $("#color").text("GREEN");
          $("#color").css('background-color','green');
          $("#color").css('color','black');
          $(location).attr('href',"http://192.168.24.8:7040/green");
        }
        if(r==0&&g==0&&b==1) {
          $('.dartback').css('background-color','blue');
          $("#color").text("BLUE");
          $("#color").css('background-color','blue');
          $("#color").css('color','black');
          $(location).attr('href',"http://192.168.24.8:7040/blue");
        }
        if(r==1&&g==1&&b==0) {
          $('.dartback').css('background-color','yellow');
          $("#color").text("YELLOW");
          $("#color").css('background-color','yellow');
          $("#color").css('color','black');
          $(location).attr('href',"http://192.168.24.8:7040/yellow");
        }
        if(r==1&&g==0&&b==1) {
          $('.dartback').css('background-color','magenta');
          $("#color").text("MAGENTA");
          $("#color").css('background-color','magenta');
          $("#color").css('color','black');
          $(location).attr('href',"http://192.168.24.8:7040/magenta");
        }
        if(r==0&&g==1&&b==1) {
          $('.dartback').css('background-color','cyan');
          $("#color").text("CYAN");
          $("#color").css('background-color','cyan');
          $("#color").css('color','black');
          $(location).attr('href',"http://192.168.24.8:7040/cyan");
        }
        if(r==1&&g==1&&b==1) {
          $('.dartback').css('background-color','white');
          $("#color").text("WHITE");
          $("#color").css('background-color','white');
          $("#color").css('color','black');
          $(location).attr('href',"http://192.168.24.8:7040/white");
        }
      });
    </script>
  </body>
</html>)=====";
