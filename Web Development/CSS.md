CSS stands for Cascading Style Sheets
It us a language that describes how HTML elements are displayed
Adds style to web documents
- Colors
- Fonts
- Background images
- Layout
![[Pasted image 20240125111426.png]]
## Inline CSS
Used to apply a unique style to a single HTML element
Add style attribute to the desired element
![[Pasted image 20240129192618.png|300]]
- Only affects the element it is applied to
- It is not reusable
- It is not easy to maintain
- Not posible to use pseudo-classes
	- Style elements when a user mouses over them
		- :hover, :active, :focus, etc.
## Internal CSS
Used to apply a unique style to a single HTML document
Advantages
- Uniform style for the entire document
- It is possible to use pseudo-classes
Disadvantages
- It only affects the document it is applied to
- In multiple pages, the style must be repeated.
![[Pasted image 20240129205759.png|300]]
## External CSS
Used to apply a unique style to multiple HTML documents.
![[Pasted image 20240129210916.png|350]]
![[Pasted image 20240129210931.png|250]]
Advantages
- Uniform style for multiple documents
- Possible to use pseudo-classes
- Easy to maintain
Disadvantages
- Hard to have control over some specific elements
# Selectors
- Universal selector: Selects all elements
- Element or tag Selector: Selects all HTML elements of the specified type
![[Pasted image 20240125111904.png|300]]
- By identifier: Selects the element with the specified ID (can only be one element)
![[Pasted image 20240125111917.png]]
- by Class: Selects all elements with the specified Class
![[Pasted image 20240125111926.png]]

## Basic Properties
![[Pasted image 20240125115103.png]]
##### *Color and Background*
- **olor**: specifies the text color.
    - by name: `red | blue | black | white | orange | ...`
    - rgb(0,255,255)=rgb(0%,100%,100%) = #0ff = #00ffff
    - rgba(red, green, blue, alpha) = rgb(0,255,255,0.5)
    - [HTML Color Picker](https://www.w3schools.com/colors/colors_picker.asp)
- **Background**: `background-color` property.
    - background-color: color
    - background-image: url(“imagen.gif”);
    - background-repeat:no-repeat; [repeat|repeat-x|repeat-y|no-repeat|initial|inherit;]
    - background-position: right top; [left top | left center | left bottom | right top | righ center | right bottom| center center| center bottom] | x% y% | xpos ypos
    - background-size: 300px 100px; [auto|length|cover|contain|initial|inherit]
##### *Fonts*
- **font-family**: [ family-name | generic-family ] | initial | inherit
- **font-size**: xx-small | x-small | small | medium | large | x-large | xx-large | smaller | larger | length | percentage | initial | inherit
- **font-weight**: normal | bold | bolder | lighter | 100 | 200 | 300 | 400 | 500 | 600 | 700| 800 | 900 | initial | inherit (bold=700, normal=400)
- **font**: [ font-style font-variant font-weight font-size/line-height font-family ] | caption | icon | menu | message-box | small-caption | status-bar | initial | inherit
![[Pasted image 20240129212351.png]]
## Attribute selectors
- By attribute: Selects all elements with the specified attribute or with a value assigned to an attribute.
![[Pasted image 20240125115852.png]]
1. - `[attr]` the element has the attribute. **`[checked] { … }`**.
2. - `[attr=val]` attribute with the specified value. **`[name="chk"] { … }`**.
3. - `[attr~=val]` attribute with a value that contains a specified word in a space-separated list of words. **`[value~="val2"] { … }`**. 
4. `[attr^=val]` attribute with a value that begins with a specified value. **`[type^="check"] { … }`**.
5. `[attr$=val]` attribute with a value that ends with a specified value. **`[value$="2"] { … }`**.
6. `[attr*=val]` attribute with a value in any position **`[value*="2"] { … }`**.
## Pseudo classes
- [`:active`](https://developer.mozilla.org/es/docs/Web/CSS/:active)
- [`:checked`](https://developer.mozilla.org/es/docs/Web/CSS/:checked)
- [`:default`](https://developer.mozilla.org/es/docs/Web/CSS/:default)
- [`:dir()`](https://developer.mozilla.org/es/docs/Web/CSS/:dir)
- [`:disabled`](https://developer.mozilla.org/es/docs/Web/CSS/:disabled)
- [`:empty`](https://developer.mozilla.org/es/docs/Web/CSS/:empty)
- [`:enabled`](https://developer.mozilla.org/es/docs/Web/CSS/:enabled)
- [`:first`](https://developer.mozilla.org/es/docs/Web/CSS/:first)
- [`:first-child`](https://developer.mozilla.org/es/docs/Web/CSS/:first-child)
- [`:first-of-type`](https://developer.mozilla.org/es/docs/Web/CSS/:first-of-type)
- [`:fullscreen`](https://developer.mozilla.org/es/docs/Web/CSS/:fullscreen)
- [`:focus`](https://developer.mozilla.org/es/docs/Web/CSS/:focus)
- [`:hover`](https://developer.mozilla.org/es/docs/Web/CSS/:hover)
- [`:indeterminate`](https://developer.mozilla.org/es/docs/Web/CSS/:indeterminate)
- [`:in-range`](https://developer.mozilla.org/es/docs/Web/CSS/:in-range)
- [`:invalid`](https://developer.mozilla.org/es/docs/Web/CSS/:invalid)
- [`:lang()`](https://developer.mozilla.org/es/docs/Web/CSS/:lang)
- [`:last-child`](https://developer.mozilla.org/es/docs/Web/CSS/:last-child)
- [`:last-of-type`](https://developer.mozilla.org/es/docs/Web/CSS/:last-of-type)
- [`:left`](https://developer.mozilla.org/es/docs/Web/CSS/:left)
- [`:link`](https://developer.mozilla.org/es/docs/Web/CSS/:link)
- [`:not()`](https://developer.mozilla.org/es/docs/Web/CSS/:not)
- [`:nth-child()`](https://developer.mozilla.org/es/docs/Web/CSS/:nth-child)
- [`:nth-last-child()`](https://developer.mozilla.org/es/docs/Web/CSS/:nth-last-child)
- [`:nth-of-type()`](https://developer.mozilla.org/es/docs/Web/CSS/:nth-of-type)
- [`:nth-last-of-type()`](https://developer.mozilla.org/es/docs/Web/CSS/:nth-last-of-type)
- [`:only-child`](https://developer.mozilla.org/es/docs/Web/CSS/:only-child)
- [`:only-of-type`](https://developer.mozilla.org/es/docs/Web/CSS/:only-of-type)
- [`:optional`](https://developer.mozilla.org/es/docs/Web/CSS/:optional)
- [`:out-of-range`](https://developer.mozilla.org/es/docs/Web/CSS/:out-of-range)
- [`:read-only`](https://developer.mozilla.org/es/docs/Web/CSS/:read-only)
- [`:read-write`](https://developer.mozilla.org/es/docs/Web/CSS/:read-write)
- [`:required`](https://developer.mozilla.org/es/docs/Web/CSS/:required)
- [`:right`](https://developer.mozilla.org/es/docs/Web/CSS/:right)
- [`:root`](https://developer.mozilla.org/es/docs/Web/CSS/:root)
- [`:scope`](https://developer.mozilla.org/en-US/docs/Web/CSS/:scope)
- [`:target`](https://developer.mozilla.org/es/docs/Web/CSS/:target)
- [`:valid`](https://developer.mozilla.org/es/docs/Web/CSS/:valid)
- [`:visited`](https://developer.mozilla.org/es/docs/Web/CSS/:visited)
### *Main*
- **E:hover**: Selects an element E when you mouse over it.
- **E:first-child** / **:last-child** : Selects the first/last element of its parent. When we have nested tags, if we want the first child inside the parent, use child.
- **E:nth-child(n)** : Selects the nth element of its parent. (eg. the paragraph that is the third child)
- **E:nth-last-child(n)**: Selects the nth element of its parent, counting from the last element.
- **E:nth-of-type(n)**: Selects the nth element of its parent of the same type (eg. the third paragraph).
- **E:nth-last-of-type(n)**: Selects the nth element of its parent, counting from the last element.
- **E:not(s)**: Selects element E that do not match the selector s.
- **E:checked**: Selects an element that has the property checked, like a radio button or checkbox.
### *Pseudo-elements*
Allow adding styles to a specific part of the document.
- To style the first letter, line, or element.
- To insert content before or after the content of an element.
- They can be used with double colons (*::*) or with only one colon (*:*)
![[Pasted image 20240129212637.png]]

### *Combinators*

- S1 and S2 are selectors; we can combine these selectors to be more specific
- Group of selectors (S1, S2)
- **A CSS rule applies to all selectors separated by a comma**
#### Descendants (S1 S2)
Separated by space
Selects all elements that are descendants (nested in all levels)
#### Child selector (S1 > S2)
selects all elements that are immediate children of the elements selected by the first selector.
#### Adjacent sibling (S1 + S2)
Selects all elements that are the same level (siblings) and are adjacent (immediatle following) to the elements selected by the first selector.
#### General sibling (S1 ~S2)
Similar to the previous one, but selects all sibling (*They don't have to be adjacent*)