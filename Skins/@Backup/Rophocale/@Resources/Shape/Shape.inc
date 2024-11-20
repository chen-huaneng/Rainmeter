[Variables]
r1=(37*[#Size])
r2=(12*[#Size])

[Wings]
Meter=Image
x=0
y=0
ImageName=#@#Image\[#Size]\Wings.png
UpdateDivider=-1

[DialPlate_back]
Meter=Image
x=(80*[#Size])
y=(40*[#Size])
ImageName=#@#Image\[#Size]\DialPlate_back.png
UpdateDivider=-1

[太阳高度角表盘]
Meter=Shape
x=(130*[#Size])
y=(90*[#Size])
Shape=Path SEA0| StrokeWidth 0 | Fill LinearGradient Gradient1
SEA0=[SEA0]
Gradient1=270|40,40,255;0|255,150,240;1
Shape2=Path SEA_18| StrokeWidth 2 | Fill Color 50,50,50,255
SEA_18=[SEA_18]
Shape3=Combine Shape|Exclude Shape2
UpdateDivider=-1

[古巴比伦时间表盘]
Meter=Shape
x=(130*[#Size])
y=(90*[#Size])
Shape=Path Path1| Extend MySharedModifiers
Shape2=Path Path2| Extend MySharedModifiers
Shape3=Path Path3| Extend MySharedModifiers
Shape4=Path Path4| Extend MySharedModifiers
Shape5=Path Path5| Extend MySharedModifiers
Shape6=Path Path6| Extend MySharedModifiers
Shape7=Path Path7| Extend MySharedModifiers
Shape8=Path Path8| Extend MySharedModifiers
Shape9=Path Path9| Extend MySharedModifiers
Shape10=Path Path10| Extend MySharedModifiers
Shape11=Path Path11| Extend MySharedModifiers
Path1=[BBL1]
Path2=[BBL2]
Path3=[BBL3]
Path4=[BBL4]
Path5=[BBL5]
Path6=[BBL6]
Path7=[BBL7]
Path8=[BBL8]
Path9=[BBL9]
Path10=[BBL10]
Path11=[BBL11]
MySharedModifiers=StrokeWidth 2 | Stroke Color 3,30,90,255 | Fill Color 0,0,0,0
UpdateDivider=-1

[DialPlate]
Meter=Image
x=(80*[#Size])
y=(40*[#Size])
ImageName=#@#Image\[#Size]\DialPlate.png
UpdateDivider=-1

[StarHourAngle]
Measure=Calc
Formula=真恒星时*500

[MoonHourAngle]
Measure=Calc
Formula=真月球时*500

[SunHourAngle]
Measure=Calc
Formula=真太阳时*500

[MoonPhase]
Measure=Calc
Formula=(真月球时+36-真太阳时)%24/12-1

[Zodiac_shadow]
Meter=Rotator
x=(80*[#Size])
y=(41.4*[#Size])
w=(100*[#Size])
h=(100*[#Size])
OffSetX=(50*[#Size])
OffSetY=(50*[#Size])
MeasureName=StarHourAngle
ImageName=#@#Image\[#Size]\Zodiac_shadow.png
ImageAlpha=200
ValueRemainder=12000

[Zodiac]
Meter=Rotator
x=(80*[#Size])
y=(40*[#Size])
w=(100*[#Size])
h=(100*[#Size])
OffSetX=(50*[#Size])
OffSetY=(50*[#Size])
MeasureName=StarHourAngle
ImageName=#@#Image\[#Size]\Zodiac.png
ValueRemainder=12000

[StarHand_shadow]
Meter=Rotator
x=(80*[#Size])
y=(41.4*[#Size])
w=(100*[#Size])
h=(100*[#Size])
OffSetX=(50*[#Size])
OffSetY=(50*[#Size])
MeasureName=StarHourAngle
ImageName=#@#Image\[#Size]\StarHand_shadow.png
ImageAlpha=200
ValueRemainder=12000

[StarHand]
Meter=Rotator
x=(80*[#Size])
y=(40*[#Size])
w=(100*[#Size])
h=(100*[#Size])
OffSetX=(50*[#Size])
OffSetY=(50*[#Size])
MeasureName=StarHourAngle
ImageName=#@#Image\[#Size]\StarHand.png
ValueRemainder=12000

[MoonHand_shadow]
Meter=Rotator
x=(80*[#Size])
y=(41.4*[#Size])
w=(100*[#Size])
h=(100*[#Size])
OffSetX=(50*[#Size])
OffSetY=(50*[#Size])
MeasureName=MoonHourAngle
ImageName=#@#Image\[#Size]\SunMoonHand_shadow.png
ImageAlpha=200
ValueRemainder=12000

[Moon_shadow]
Meter=Image
x=(130*[#Size]+[月球位置半径]*Sin(Rad([真月球时]*15))-3*[#Size]-2)
y=(90*[#Size]-[月球位置半径]*Cos(Rad([真月球时]*15))-3*[#Size]-2+1.4*[#Size])
ImageName=#@#Image\[#Size]\Moon_shadow.png
ImageAlpha=200
DynamicVariables=1

[MoonHand]
Meter=Rotator
x=(80*[#Size])
y=(40*[#Size])
w=(100*[#Size])
h=(100*[#Size])
OffSetX=(50*[#Size])
OffSetY=(50*[#Size])
MeasureName=MoonHourAngle
ImageName=#@#Image\[#Size]\SunMoonHand.png
ValueRemainder=12000

[FullMoon]
Meter=Image
x=(130*[#Size]+[月球位置半径]*Sin(Rad([真月球时]*15))-3*[#Size]-2)
y=(90*[#Size]-[月球位置半径]*Cos(Rad([真月球时]*15))-3*[#Size]-2)
ImageName=#@#Image\[#Size]\FullMoon.png
DynamicVariables=1

[Moon]
Meter=Shape
Shape=Ellipse (130*[#Size]+[月球位置半径]*Sin(Rad([真月球时]*15))),(90*[#Size]-[月球位置半径]*Cos(Rad([真月球时]*15))),(3*[#Size]+2)
DynamicVariables=1

[NewMoon]
Meter=Image
x=(130*[#Size]+[月球位置半径]*Sin(Rad([真月球时]*15))+(6*[#Size]+4)*[MoonPhase]*Cos(Rad([真月球时]*15))-3*[#Size]-2)
y=(90*[#Size]-[月球位置半径]*Cos(Rad([真月球时]*15))+(6*[#Size]+4)*[MoonPhase]*Sin(Rad([真月球时]*15))-3*[#Size]-2)
ImageName=#@#Image\[#Size]\NewMoon.png
Container=Moon
DynamicVariables=1

[SunHand_shadow]
Meter=Rotator
x=(80*[#Size])
y=(41.4*[#Size])
w=(100*[#Size])
h=(100*[#Size])
OffSetX=(50*[#Size])
OffSetY=(50*[#Size])
MeasureName=SunHourAngle
ImageName=#@#Image\[#Size]\SunMoonHand_shadow.png
ImageAlpha=200
ValueRemainder=12000

[Sun_shadow]
Meter=Image
x=(130*[#Size]+[太阳位置半径]*Sin(Rad([真太阳时]*15))-5*[#Size])
y=(90*[#Size]-[太阳位置半径]*Cos(Rad([真太阳时]*15))-3.6*[#Size])
ImageName=#@#Image\[#Size]\Sun_shadow.png
ImageAlpha=200
DynamicVariables=1

[SunHand]
Meter=Rotator
x=(80*[#Size])
y=(40*[#Size])
w=(100*[#Size])
h=(100*[#Size])
OffSetX=(50*[#Size])
OffSetY=(50*[#Size])
MeasureName=SunHourAngle
ImageName=#@#Image\[#Size]\SunMoonHand.png
ValueRemainder=12000

[Sun]
Meter=Image
x=(130*[#Size]+[太阳位置半径]*Sin(Rad([真太阳时]*15))-5*[#Size])
y=(90*[#Size]-[太阳位置半径]*Cos(Rad([真太阳时]*15))-5*[#Size])
ImageName=#@#Image\[#Size]\Sun.png
DynamicVariables=1

[HandPedestal]
Meter=Image
x=(128*[#Size]-4)
y=(88*[#Size]-4)
ImageName=#@#Image\[#Size]\HandPedestal.png

[OffSet]
Measure=Calc
Formula=OffSet+1
UpdateDivider=1

[Circle]
Meter=Rotator
x=(52*[#Size])
y=(12*[#Size])
w=(156*[#Size])
h=(156*[#Size])
OffSetX=(78*[#Size])
OffSetY=(78*[#Size])
MeasureName=OffSet
ImageName=#@#Image\[#Size]\Circle.png
ValueRemainder=360
UpdateDivider=1

[hgContainer]
Meter=Shape
x=(65*[#Size])
y=(25*[#Size])
Shape=Rectangle 0,0,(130*[#Size]),(130*[#Size]) | Fill RadialGradient Gradient1 | StrokeWidth 0
Gradient1=0,0|0,0,0,255;0|0,0,0,255;0.9|0,0,0,0;1
UpdateDivider=-1

[huiguang1]
Meter=Image
x=([OffSet]%100-100)
ImageAlpha=(7*Abs(([OffSet]+50)%100-50))
ImageName=#@#Image\[#Size]\huiguang.png
Container=hgContainer
DynamicVariables=1
UpdateDivider=1

[huiguang2]
Meter=Image
x=(([OffSet]+50)%100-100)
ImageAlpha=(7*Abs([OffSet]%100-50))
ImageName=#@#Image\[#Size]\huiguang.png
Container=hgContainer
DynamicVariables=1
UpdateDivider=1