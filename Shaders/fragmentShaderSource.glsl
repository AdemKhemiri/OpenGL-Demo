

#version 330 core
out vec4 FragColor;

in vec3 ourColor;
in vec2 texCoord;

uniform sampler2D myTexture1;
uniform sampler2D myTexture2;
void main()
{
    FragColor = mix(texture(myTexture1, texCoord), texture(myTexture2, texCoord), 0.2);
}

