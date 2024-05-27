# # import math
# # def ball_collide(ball1, ball2):
# #     # Unpack the coordinates and radii of the balls
# #     x1, y1, r1 = ball1
# #     x2, y2, r2 = ball2
    
# #     # Calculate the distance between the centers of the two balls
# #     distance = math.sqrt((x2 - x1) ** 2 + (y2 - y1) ** 2)
    
# #     # Check if the distance is less than or equal to the sum of their radii
# #     if distance <= r1 + r2:
# #         return True  
# #     else:
# #         return False  

# # # Test the function
# # ball1 = (0, 0, 3)  # Ball 1 with coordinates (0, 0) and radius 3
# # ball2 = (4, 0, 2)  # Ball 2 with coordinates (4, 0) and radius 2

# # # Check if the balls are colliding
# # collision = ball_collide(ball1, ball2)
# # print("Balls are colliding:", collision)
# import math
# def ball_collide(ball1,ball2):
#     x1,y1,r1=ball1
#     x2,y2,r2=ball2
#     distance=math.sqrt((x2-x1)**2+(y2-y1)**2)
    
#     if distance<=r2+r1:
#         return True
#     else:
#         return False
# ball1=(0,0,2)
# ball2=(4,0,3)
# collision=ball_collide(ball1,ball2)
# print("BAll colliding :",collision)
import math
def ball_collide(ball1,ball2):
    x1,y1,r1 = ball1
    x2,y2,r2 = ball2
    
    distance = math.sqrt((x2-x1)**2 +(y2-y1)**2)
    if distance<=r2 + r1:
        return True
    else:
        return False
ball1=(0,5,4)
ball2=(0,2,9)
result=ball_collide(ball1,ball2)
print("BALL COLLIDING: ",result)