class Solution {
public:
    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
        // Clamp the circle's center to the rectangle's bounds
        int closestX = max(x1, min(xCenter, x2)); 
        int closestY = max(y1, min(yCenter, y2)); 
        
        // Calculate the squared distance from the circle's center to the closest point
        int dx = xCenter - closestX;
        int dy = yCenter - closestY; 
        
        // Check if the squared distance is less than or equal to the squared radius
        return dx * dx + dy * dy <= radius * radius; 
    }
};